#include "Animal.hpp"

Animal::Animal(void) : type("Animal") {
    std::cout << type << " Animal::Animal() constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
    std::cout << type << " Animal::Animal(std::string type) constructor  called"
              << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal::~Animal() destructor called" << std::endl;
}

Animal::Animal(Animal const &src) { *this = src; }

Animal &Animal::operator=(Animal const &rhs) {
    this->type = rhs.type;
    return *this;
}

void Animal::makeSound() {
    std::cout << "Animal::makeSound() animal sound" << std::endl;
}