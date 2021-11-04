#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
    std::cout << this->type << " Dog::Dog() default constructor called"
              << std::endl;
    _brain = new Brain();
}

Dog::~Dog() {
    std::cout << this->type << " Dog::~Dog() destructor called" << std::endl;
    delete _brain;
}

Dog::Dog(std::string type) : Animal(type) {
    std::cout << this->type << " Dog::Dog(std::string type) constructor called"
              << std::endl;
    _brain = new Brain();
}

Dog::Dog(Dog const &src) { _brain = new Brain(*src.getBrain()); }

Dog &Dog::operator=(Dog const &rhs) {
    this->~Dog();
    _brain = rhs._brain;
    Animal::operator=(rhs);
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Dog::makeSound() The " << this->type << " says WOOF"
              << std::endl;
}

Brain *Dog::getBrain() const { return this->_brain; }