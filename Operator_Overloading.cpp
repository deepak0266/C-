#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0, double i = 0) : real(r), imag(i) 
    {
        
    }

    // Overloading the - operator
    Complex operator-(const Complex& x) const {
        Complex res;
        res.real = this->real - x.real;
        res.imag = this->imag - x.imag;
        return res;
    }

    // Display function
    void display() const {
        if (imag < 0)
            cout << real << " - " << -imag << "i" << endl;
        else
            cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    // Create two complex numbers
    Complex c1(5, 3);
    Complex c2(2, 4);

    // Subtract c2 from c1
    Complex res = c1 - c2;

    // Display the res
    cout << "res of subtraction: ";
    res.display();

    return 0;
}
