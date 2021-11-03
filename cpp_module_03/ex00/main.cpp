#include "ClapTrap.hpp"

int main(void) {
    ClapTrap Tom("Tom");
    ClapTrap trap("Kori");
    ClapTrap Defo;

    Defo.attack(trap.getName());
    trap.attack(Tom.getName());
    Tom.attack(trap.getName());
    trap.takeDamage(Tom.getAttackDamage());
    Tom.takeDamage(trap.getAttackDamage());
    Defo.takeDamage(Tom.getAttackDamage());
    Defo.beRepaired(45);
    trap.beRepaired(10);
    Tom.beRepaired(20);
    return 0;
}