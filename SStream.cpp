#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string input = "123 456 789";
    std::stringstream ss(input);

    int a, b, c,d;
    ss >> a >> b >> c >>d;

    std::cout << "a: " << a << ", b: " << b << ", c: " << c <<", d: "<< d << std::endl;
    return 0;
}
