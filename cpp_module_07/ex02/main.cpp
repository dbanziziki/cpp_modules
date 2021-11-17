#include "Array.hpp"

int main() {
    std::srand(time(NULL));
    std::cout << "[ Array of strings ]" << std::endl;
    Array<std::string> a(5);

    for (int i = 0; i < 5; i++) {
        a[i] = "Student " + std::to_string(std::rand() % 100);
    }
    for (int i = 0; i < 5; i++) {
        std::cout << a[i] << std::endl;
    }
    std::cout << "[ Copy of the array of strings ]" << std::endl;
    Array<std::string> b;
    b = a;

    for (int i = 0; i < 5; i++) {
        std::cout << b[i] << std::endl;
    }
    std::cout << "[ Array of integers ]" << std::endl;
    Array<int> int_arr(5);
    for (int i = 0; i < 5; i++) {
        int_arr[i] = std::rand() % 100;
    }
    for (int i = 0; i < 5; i++) {
        std::cout << int_arr[i] << std::endl;
    }
    std::cout << "[ Array of floats ]" << std::endl;
    Array<float> float_arr(5);
    for (int i = 0; i < 5; i++) {
        float_arr[i] = static_cast<float>((std::rand()) /
                                          (static_cast<float>(RAND_MAX / 100)));
    }
    for (int i = 0; i < 5; i++) {
        std::cout << float_arr[i] << std::endl;
    }

    return 0;
}
