#include "Zombie.hpp"

int main(void) {

    Zombie *horde = zombieHorde(19, "Karen");
    delete[] horde;
    return 0;
}
