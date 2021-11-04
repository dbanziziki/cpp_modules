#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
    std::cout << type << " Cat::Cat() default constructor called" << std::endl;
    _brain = new Brain();
}

Cat::Cat(std::string type) : Animal(type) {
    std::cout << type << " Cat::Cat(std::string type) constructor called"
              << std::endl;
    _brain = new Brain();
}

Cat::Cat(Cat const &src) { _brain = new Brain(*src.getBrain()); }

Cat::~Cat() {
    std::cout << this->type << " Cat::~Cat() destructor called" << std::endl;
    delete _brain;
}

Cat &Cat::operator=(Cat const &rhs) {
    this->~Cat();
    _brain = rhs._brain;
    Animal::operator=(rhs);
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Cat::makeSound() The " << this->type << " says MIAOU"
              << std::endl;
}

Brain *Cat::getBrain() const { return this->_brain; }