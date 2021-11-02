#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {}

Cat::~Cat() { std::cout << this->type << " destructor called" << std::endl; }

Cat &Cat::operator=(Cat const &rhs) {
    Animal::operator=(rhs);
    return *this;
}

void Cat::makeSound() {
    std::cout << "The " << this->type << " says MIAOU" << std::endl;
}