#include <array>

#include "span.hpp"

int main() {
    Span sp = Span(5);
    Span big(10000);
    std::vector<int> v;
    Span nosp = Span(2);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    try {
        sp.addNumber(10);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    try {
        nosp.shortestSpan();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    for (int i = 0; i < 10000; i++) {
        v.push_back(std::rand() % 5000 + 50);
    }

    try {
        big.addNumber(v.begin(), v.end());
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::cout << "shortest span is: " << big.shortestSpan() << std::endl;
        std::cout << "longest span is: " << big.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
