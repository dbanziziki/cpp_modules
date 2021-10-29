#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
    Animal *kitty = new Cat();
    Animal *dogo = new Dog();

    kitty->makeSound();
    dogo->makeSound();
    return 0;
}
