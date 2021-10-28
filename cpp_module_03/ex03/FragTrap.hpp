#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
  private:
  public:
    FragTrap(void);
    FragTrap(std::string const &name);
    FragTrap(FragTrap const &src);
    ~FragTrap();

    FragTrap &operator=(FragTrap const &rhs);

    void highFivesGuys(void);
};

#endif