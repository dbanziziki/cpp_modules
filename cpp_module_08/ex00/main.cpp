
#include "easyfind.hpp"

int main() {
    /* code */
    std::vector<int> v;

    v.push_back(5);
    v.push_back(2);
    v.push_back(7);

    try {
        int p = ::easyfind(v, 2);
        std::cout << p << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    try {
        int k = ::easyfind(v, 9);
        std::cout << k << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
