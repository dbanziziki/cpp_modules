#include "Weapon.hpp"

Weapon::Weapon(void) {}

Weapon::Weapon(std::string type) : type(type) {}

Weapon::~Weapon(void) {}

std::string Weapon::getType(void) const { return this->type; }

void Weapon::setType(std::string value) { this->type = value; }
