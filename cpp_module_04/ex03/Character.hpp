#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include "ICharacter.hpp"

class Character : public ICharacter {
  private:
    AMateria *_invatory[4];
    std::string _name;

  public:
    Character(std::string const &name);
    Character(Character const &src);
    Character();
    virtual ~Character();

    Character &operator=(Character const &rhs);

    AMateria *getMateria(unsigned int idx) const;

    std::string const &getName() const;
    virtual void equip(AMateria *m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter &target);
};

#endif