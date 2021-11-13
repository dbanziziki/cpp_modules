#include <array>

#include "span.hpp"

int main() {
    Span s(7);
    std::vector<int> a;

    a.push_back(1);
    a.push_back(1);
    a.push_back(1);
    a.push_back(1);
    a.push_back(1);
    a.push_back(1);

    s.addNumber(a.begin(), a.end());
    return 0;
}
