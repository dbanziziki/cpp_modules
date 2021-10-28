#include "DiamondTrap.hpp"

int main(void) {
    DiamondTrap Leni("Leni");

    Leni.attack("Donie");
    Leni.takeDamage(10);
    Leni.beRepaired(12);
    Leni.guardGate();
    Leni.highFivesGuys();
    Leni.whoAmI();
    return 0;
}
