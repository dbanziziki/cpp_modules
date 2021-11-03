#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
    std::cout << this->type << " Dog::Dog() default constructor called"
              << std::endl;
}

Dog::~Dog() {
    std::cout << this->type << " Dog::~Dog() destructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type) {
    std::cout << this->type << " Dog::Dog(std::string type) constructor called"
              << std::endl;
}

Dog::Dog(Dog const &src) { *this = src; }

Dog &Dog::operator=(Dog const &rhs) {
    Animal::operator=(rhs);
    return *this;
}

void Dog::makeSound() {
    std::cout << "Dog::makeSound() The " << this->type << " says WOOF"
              << std::endl;
}