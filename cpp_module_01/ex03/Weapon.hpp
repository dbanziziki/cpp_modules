#ifndef __WEAPON_H_
# define __WEAPON_H_

#include <iostream>

class Weapon
{
private:
    std::string type;

public:
    std::string getType( void ) const;
    void    setType( std::string value );
    Weapon( void );
    Weapon( std::string type );
    ~Weapon( void );
};

#endif