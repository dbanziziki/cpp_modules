#ifndef __HUMANB_H_
# define __HUMANB_H_

#include "Weapon.hpp"

class HumanB
{
private:
    Weapon*      _weapon;
    std::string _name;
public:
    HumanB( std::string name );
    HumanB( void );
    ~HumanB( void );

    void    attack( void );
    void    setWeapon( Weapon &w);
};


#endif