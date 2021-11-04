#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
  private:
    Brain *_brain;

  public:
    Cat(void);
    Cat(Cat const &src);
    Cat(std::string type);
    virtual ~Cat();

    Cat &operator=(Cat const &rhs);

    virtual void makeSound() const;
    Brain *getBrain() const;
};

#endif