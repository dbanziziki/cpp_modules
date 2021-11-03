#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
    Animal *meta = new Animal();
    Animal *kitty = new Cat();
    Animal *dogo = new Dog();
    WrongAnimal *wrong = new WrongCat();

    kitty->makeSound();
    dogo->makeSound();
    meta->makeSound();
    wrong->makeSound();
    delete kitty;
    delete dogo;
    delete meta;
    delete wrong;
    return 0;
}
