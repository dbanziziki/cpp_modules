#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::HumanB(void) {}

HumanB::~HumanB(void) {}

void HumanB::attack(void) {
  std::cout << _name << " Attacks with his " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &w) { this->_weapon = &w; }