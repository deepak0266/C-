#include <iostream>

class Base {
public:
    virtual void show() { // Virtual function
        std::cout << "Base show()" << std::endl;
    }
};

class Derived : virtual public Base {
public:
    void show() override { // Override virtual function
        std::cout << "Derived show()" << std::endl;
    }
};

int main() {
    Base b;
    Derived d;
    Base* ptr;
    d.show();
    ptr = &b;
    ptr->show(); // Calls Base's show()

    ptr = &d;
    ptr->show(); // Calls Derived's show() due to late binding

    return 0;
}
