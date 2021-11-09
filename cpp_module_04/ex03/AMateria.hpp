#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria {
  protected:
    std::string type;

  public:
    AMateria(std::string const &type);
    AMateria();
    AMateria(AMateria const &src);
    virtual ~AMateria();
    std::string const &getType() const; // Returns the materia type
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);

    AMateria &operator=(AMateria const &rhs);
};

#endif