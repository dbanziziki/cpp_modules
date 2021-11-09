#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type) {}

AMateria::~AMateria() {}

AMateria::AMateria(AMateria const &src) { this->type = src.type; }

AMateria &AMateria::operator=(AMateria const &rhs) {
    this->type = rhs.type;
    return *this;
}