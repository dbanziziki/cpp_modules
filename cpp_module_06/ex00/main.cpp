#include "ScalarConvertion.hpp"

int main(int argc, char const *argv[]) {
    if (argc < 2) return 1;
    ScalarConvertion s(argv[1]);

    std::cout << s << std::endl;
    return 0;
}
