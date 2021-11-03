#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
    std::cout << type << " Cat::Cat() default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type) {
    std::cout << type << " Cat::Cat(std::string type) constructor called"
              << std::endl;
}

Cat::~Cat() {
    std::cout << this->type << " Cat::~Cat() destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs) {
    Animal::operator=(rhs);
    return *this;
}

void Cat::makeSound() {
    std::cout << "Cat::makeSound() The " << this->type << " says MIAOU"
              << std::endl;
}