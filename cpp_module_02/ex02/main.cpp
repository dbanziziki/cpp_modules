#include "Fixed.hpp"

int main(void) {
    Fixed a;
    Fixed c(20);
    Fixed d(5);
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    std::cout << std::endl;
    std::cout << "ADD SUB MUL DIV" << std::endl;
    std::cout << std::endl;
    std::cout << c << " - " << d << " = " << c - d << std::endl;
    std::cout << c << " + " << d << " = " << c + d << std::endl;
    std::cout << c << " * " << d << " = " << c * d << std::endl;
    std::cout << c << " / " << d << " = " << c / d << std::endl;

    std::cout << std::endl;
    std::cout << "comparison operators" << std::endl;
    std::cout << std::endl;
    std::cout << c << " > " << b << " --> " << (c > b) << std::endl;
    std::cout << c << " < " << b << " --> " << (c < b) << std::endl;
    std::cout << c << " != " << b << " --> " << (c != b) << std::endl;
    std::cout << c << " == " << b << " --> " << (c == b) << std::endl;
    std::cout << c << " >= " << b << " --> " << (c >= b) << std::endl;
    std::cout << c << " <= " << b << " --> " << (c <= b) << std::endl;

    return 0;
}