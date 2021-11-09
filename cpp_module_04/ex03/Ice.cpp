#include "Ice.hpp"

Ice::Ice() {}

Ice::~Ice() {}

AMateria *Ice::clone() const {
    Ice *clone = new Ice();
    return clone;
}

void Ice::use(ICharacter &target) {
    std::cout << this->type << ": * shoots an ice bolt at " << target.getName()
              << " *" << std::endl;
}