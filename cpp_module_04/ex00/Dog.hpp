#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"

class Dog : public Animal {
  private:
    /* data */
  public:
    Dog(void);
    Dog(std::string type);
    virtual ~Dog();
    Dog(Dog const &src);

    Dog &operator=(Dog const &rhs);
    virtual void makeSound();
};

#endif