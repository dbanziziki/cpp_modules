#ifndef __CURE_H__
#define __CURE_H__

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
  private:
  public:
    Cure();
    Cure(Cure const &src);
    virtual ~Cure();

    Cure &operator=(Cure const &rhs);

    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
};

#endif