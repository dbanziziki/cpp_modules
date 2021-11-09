#ifndef __ICE_H__
#define __ICE_H__

#include "AMateria.hpp"

class Ice : public AMateria {
  private:
  public:
    Ice();
    ~Ice();

    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
};

#endif