#include "ClapTrap.hpp"

int main(void) {
  ClapTrap Tom("Tom");
  ClapTrap trap("Kori");

  trap.attack(Tom.getName());
  Tom.attack(trap.getName());
  trap.takeDamage(Tom.getAttackDamage());
  Tom.takeDamage(trap.getAttackDamage());
  trap.beRepaired(10);
  Tom.beRepaired(20);
  return 0;
}