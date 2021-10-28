#include "Dog.hpp"

Dog::Dog(/* args */) { std::cout << "Dog constructor called" << std::endl; }

Dog::~Dog() { std::cout << "Dog destructor called" << std::endl; }

Dog::Dog(Dog const &src) { *this = src; }

Dog &Dog::operator=(Dog const &rhs) {
    Animal::operator=(rhs);
    return *this;
}

void Dog::makeSound() { std::cout << "The dog says WOOF" << std::endl; }