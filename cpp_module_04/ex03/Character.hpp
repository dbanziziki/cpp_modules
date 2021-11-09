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
    ~Character();

    Character &operator=(Character const &rhs);

    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};

#endif