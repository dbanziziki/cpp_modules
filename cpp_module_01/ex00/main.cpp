#include "Zombie.hpp"

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;

    Zombie  charles("Charles");
    Zombie  *Lee = new Zombie("Lee");

    charles.announce();
    Lee->announce();
    delete Lee;
    return 0;
}
