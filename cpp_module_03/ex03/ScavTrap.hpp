#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
  private:
  public:
    ScavTrap(/* args */);
    ScavTrap(std::string const &name);
    virtual ~ScavTrap();
    ScavTrap(ScavTrap const &src);

    ScavTrap &operator=(ScavTrap const &rhs);
    void attack(std::string const &target);
    void guardGate();
};

#endif