#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"

class Cat : public Animal {
  private:
  public:
    Cat(void);
    Cat(Cat const &src);
    virtual ~Cat();

    Cat &operator=(Cat const &rhs);

    virtual void makeSound();
};

#endif