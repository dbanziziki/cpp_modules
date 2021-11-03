#include "WrongCat.hpp"

WrongCat::WrongCat(/* args */) : WrongAnimal("wrong_cat") {
    std::cout << this->type << " WrongCat::WrongCat() constructor called"
              << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) { *this = src; }

WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
    std::cout << this->type
              << " WrongCat::WrongCat(std::string type) constructor called"
              << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << this->type << " WrongCat::~WrongCat() destructor called"
              << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs) {
    WrongAnimal::operator=(rhs);
    return *this;
}

void WrongCat::makeSound() {
    std::cout << "void WrongCat::makeSound() Wrong cat says (......)"
              << std::endl;
}