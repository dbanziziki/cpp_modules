#include "FragTrap.hpp"

int main(void) {
    FragTrap Tom("Tom");

    Tom.attack("Luare");
    Tom.takeDamage(47);
    Tom.beRepaired(50);
    Tom.highFivesGuys();
    return 0;
}
