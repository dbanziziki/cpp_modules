#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>

class Animal {
  protected:
    std::string type;

  public:
    Animal(/* args */);
    Animal(Animal const &src);
    ~Animal();

    Animal &operator=(Animal const &rhs);

    virtual void makeSound();
};

#endif