#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */) : type("Default") {
    std::cout << "WrongAnimal::WrongAnimal() default constructor called"
              << std::endl;
}
WrongAnimal::WrongAnimal(std::string type) : type(type) {
    std::cout << "WrongAnimal::WrongAnimal(std::string type) default "
                 "constructor called"
              << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal::~WrongAnimal() destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) { *this = src; }

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {
    type = rhs.type;
    return *this;
}

void WrongAnimal::makeSound() {
    std::cout << "WrongAnimal::makeSound() Wrong animal sound " << std::endl;
}
