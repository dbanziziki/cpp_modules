#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
  private:
    Brain *_brain;
    /* data */
  public:
    Dog(void);
    Dog(std::string type);
    virtual ~Dog();
    Dog(Dog const &src);

    Dog &operator=(Dog const &rhs);
    virtual void makeSound() const;
    Brain *getBrain() const;
    std::string getType() const;
};

#endif