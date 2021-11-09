#ifndef __ICE_H__
#define __ICE_H__

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
  private:
  public:
    Ice();
    Ice(Ice const &src);
    virtual ~Ice();

    Ice &operator=(Ice const &rhs);

    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
};

#endif