#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
    Animal *farm[100];

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0)
            farm[i] = new Dog();
        else
            farm[i] = new Cat();
    }
    Dog copy(*(Dog *)farm[2]);
    copy.makeSound();
    for (int i = 0; i < 100; i++) {
        std::cout << copy.getBrain()->getIdea(i) << " - ";
        std::cout << ((Dog *)farm[2])->getBrain()->getIdea(i) << std::endl;
    }
    for (int i = 0; i < 10; i++) {
        delete farm[i];
    }
    return 0;
}
