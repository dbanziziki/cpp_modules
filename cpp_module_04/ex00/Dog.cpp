#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
    std::cout << this->type << " constructor called" << std::endl;
}

Dog::~Dog() { std::cout << this->type << "destructor called" << std::endl; }

Dog::Dog(Dog const &src) { *this = src; }

Dog &Dog::operator=(Dog const &rhs) {
    Animal::operator=(rhs);
    return *this;
}

void Dog::makeSound() {
    std::cout << "The " << this->type << " says WOOF" << std::endl;
}