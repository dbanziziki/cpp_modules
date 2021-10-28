#ifndef __CLAPTRAP_H_
#define __CLAPTRAP_H_

#include <iostream>

class ClapTrap {
 protected:
  std::string name;
  int HitPoints;
  int EnergyPoints;
  int AttackDamage;

 public:
  ClapTrap(std::string const& name);
  ClapTrap(ClapTrap const& src);
  ClapTrap(void);
  ~ClapTrap(void);

  ClapTrap& operator=(ClapTrap const& rhs);

  void attack(std::string const& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

  int getEnergyPoint(void);
  std::string getName(void);
  int getHitPoints(void);
  int getAttackDamage(void);
};

#endif