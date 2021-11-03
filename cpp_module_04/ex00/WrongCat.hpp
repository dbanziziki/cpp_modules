#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
  private:
    /* data */
  public:
    WrongCat(/* args */);
    WrongCat(std::string type);
    WrongCat(WrongCat const &src);
    ~WrongCat();
    WrongCat &operator=(WrongCat const &rhs);

    void makeSound();
};

#endif