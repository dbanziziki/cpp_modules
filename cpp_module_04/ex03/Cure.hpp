#ifndef __CURE_H__
#define __CURE_H__

#include "AMateria.hpp"

class Cure : public AMateria {
  private:
  public:
    Cure();
    ~Cure();

    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
};

#endif