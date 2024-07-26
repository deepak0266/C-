#include <iostream>

class Base {
public:
    void show() { // Non-virtual function
        std::cout << "Base show()" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() { // Overriding function (but not virtual in base)
        std::cout << "Derived show()" << std::endl;
    }
};

int main() {
    Base b;
    Derived d;
    Base* ptr;

    ptr = &b;
    ptr->show(); // Calls Base's show()

    ptr = &d;
    ptr->show(); // Still calls Base's show() due to early binding

    return 0;
}
