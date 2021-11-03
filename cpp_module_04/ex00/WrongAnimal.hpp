#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

#include <iostream>

class WrongAnimal {
  protected:
    std::string type;

  public:
    WrongAnimal(/* args */);
    WrongAnimal(std::string type);
    virtual ~WrongAnimal();
    WrongAnimal(WrongAnimal const &src);

    WrongAnimal &operator=(WrongAnimal const &rhs);
    void makeSound();
};

#endif