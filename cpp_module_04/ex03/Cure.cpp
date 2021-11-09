#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

AMateria *Cure::clone() const {
    Cure *clone = new Cure();
    return clone;
}

Cure::Cure(Cure const &src) : AMateria(src) {}

Cure &Cure::operator=(Cure const &rhs) {
    AMateria::operator=(rhs);
    return *this;
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds"
              << " *" << std::endl;
}