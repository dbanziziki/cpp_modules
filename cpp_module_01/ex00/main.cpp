#include "Zombie.hpp"

int main(void) {

    Zombie charles("Charles");
    Zombie *Lee = newZombie("Lee");

    charles.announce();
    Lee->announce();
    delete Lee;
    randomChump("Randomi");
    return 0;
}
