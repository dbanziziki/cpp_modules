#include "Animal.hpp"

Animal::Animal(void) : type("Animal") {
    std::cout << type << " Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
    std::cout << type << " Animal constructor called" << std::endl;
}

Animal::~Animal() { std::cout << "Animal destructor called" << std::endl; }

Animal::Animal(Animal const &src) { *this = src; }

Animal &Animal::operator=(Animal const &rhs) {
    this->type = rhs.type;
    return *this;
}