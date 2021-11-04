#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>

class Animal {
  protected:
    std::string type;

  public:
    Animal(void);
    Animal(std::string type);
    Animal(Animal const &src);
    virtual ~Animal();

    Animal &operator=(Animal const &rhs);

    virtual void makeSound() const = 0;
};

#endif