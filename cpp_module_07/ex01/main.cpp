#include <iostream>

#include "iter.hpp"

int main() {
    std::string strs[3] = {"hello", "there", "you"};
    int vals[3] = {1, 2, 3};
    double dvals[3] = {1.1, 2.2, 3.3};

    std::cout << "[ std::string ]" << std::endl;
    ::iter(strs, 3, print_val);
    std::cout << "[ integer ]" << std::endl;
    ::iter(vals, 3, print_val);
    std::cout << "[ double ]" << std::endl;
    ::iter(dvals, 3, print_val);
    return 0;
}
