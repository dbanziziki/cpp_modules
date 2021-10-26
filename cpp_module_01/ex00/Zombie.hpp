#ifndef _ZOMBIE_H_
#define _ZOMBIE_H_

#include <iostream>

class Zombie
{
private:

public:
	std::string	name;
	Zombie( void );
	Zombie( std::string name );
	~Zombie( void );
	void	announce( void );
};

Zombie  *newZombie(std::string name);
void    randomChump( std::string name );
#endif
