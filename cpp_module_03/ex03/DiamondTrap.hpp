#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
  private:
    std::string name;

  public:
    DiamondTrap();
    DiamondTrap(std::string const &name);
    DiamondTrap(DiamondTrap const &src);
    virtual ~DiamondTrap();

    void attack(std::string const &target);
    void whoAmI();
    DiamondTrap &operator=(DiamondTrap const &rhs);
};

#endif