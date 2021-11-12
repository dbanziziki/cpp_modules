#include "Array.hpp"

int main() {
    Array<std::string> a(19);

    for (int i = 0; i < 19; i++) {
        a[i] = "Student " + std::to_string(i);
    }

    for (int i = 0; i < 19; i++) {
        std::cout << a[i] << std::endl;
    }

    Array<std::string> b = a;
    for (int i = 0; i < 19; i++) {
        std::cout << b[i] << std::endl;
    }

    return 0;
}
