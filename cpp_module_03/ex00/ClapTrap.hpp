#ifndef __CLAPTRAP_H_
#define __CLAPTRAP_H_

#include <iostream>

class ClapTrap {
 private:
  std::string name;
  int HitPoints;
  int EnergyPoints;
  int AttackDamage;

 public:
  ClapTrap(std::string name);
  ClapTrap(void);
  ~ClapTrap(void);

  void attack(std::string const& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

  int getEnergyPoint(void);
  std::string getName(void);
  int getHitPoints(void);
  int getAttackDamage(void);
};

#endif