#include "Point.hpp"

int main(void) {

    Point a(Fixed(0), Fixed(0));
    Point b(Fixed(20), Fixed(0));
    Point c(Fixed(10), Fixed(30));

    if (bsp(a, b, c, Point(Fixed(10), Fixed(15)))) {
        std::cout << "The point is inside the triangle" << std::endl;
    } else
        std::cout << "The point is not inside the triangle" << std::endl;
    if (bsp(a, b, c, Point(Fixed(10), Fixed(50)))) {
        std::cout << "The point is inside the triangle" << std::endl;
    } else
        std::cout << "The point is not inside the triangle" << std::endl;
    return 0;
}