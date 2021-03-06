#ifndef __HUMANA_H_
#define __HUMANA_H_

#include "Weapon.hpp"

class HumanA {
 private:
  Weapon& _weapon;
  std::string _name;

 public:
  HumanA(void);
  HumanA(std::string name, Weapon& weapon);
  ~HumanA();

  void attack(void);
  void setWeapon(Weapon& w);
};

#endif