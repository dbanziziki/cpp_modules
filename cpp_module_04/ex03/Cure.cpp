#include "Cure.hpp"

Cure::Cure() {}

Cure::~Cure() {}

AMateria *Cure::clone() const {
    Cure *clone = new Cure();
    return clone;
}

void Cure::use(ICharacter &target) {
    std::cout << this->type << "* heals " << target.getName() << "'s wounds"
              << " *" << std::endl;
}