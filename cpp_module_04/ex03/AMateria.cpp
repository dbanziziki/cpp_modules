#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type) {}

AMateria::AMateria() {}

AMateria::~AMateria() {}

AMateria::AMateria(AMateria const &src) { this->type = src.type; }

AMateria &AMateria::operator=(AMateria const &rhs) {
    this->type = rhs.type;
    return *this;
}

void AMateria::use(ICharacter &) { std::cout << "A materia use" << std::endl; }

std::string const &AMateria::getType() const { return this->type; }