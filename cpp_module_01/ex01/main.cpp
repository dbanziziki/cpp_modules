#include "Zombie.hpp"

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;

    Zombie  *horde = zombieHorde(10, "Karen");
    delete [] horde;
    return 0;
}
