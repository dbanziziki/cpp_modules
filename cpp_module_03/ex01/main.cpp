#include "ScavTrap.hpp"

int main(void) {
  ScavTrap Defo;
  ScavTrap Timmy("Timmy");

  Defo.attack(Timmy.getName());
  Timmy.attack(Defo.getName());
  Defo.takeDamage(19);
  Timmy.takeDamage(42);
  Defo.beRepaired(10);
  Timmy.beRepaired(14);
  Defo.guardGate();
  Timmy.guardGate();
  return 0;
}
