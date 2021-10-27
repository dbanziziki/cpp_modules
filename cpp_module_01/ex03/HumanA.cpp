#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
    : _weapon(weapon), _name(name) {}

HumanA::~HumanA(void) {}

void HumanA::attack(void) {
  std::cout << _name << " Attacks with his " << _weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &w) { this->_weapon = w; }