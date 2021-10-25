#include "ClapTrap.hpp"

int main( void )
{
    std::string const &target = "Tom";
    ClapTrap trap("Kori");

    trap.attack(target);
    trap.takeDamage(10);
    trap.beRepaired(10);
    return 0;
}