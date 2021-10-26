#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
    std::cout << "ClapTrap " << name << " initialized" << std::endl;
}

ClapTrap::ClapTrap( std::string name ): name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "ClapTrap " << name << " initialized" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

void    ClapTrap::attack( std::string const & target)
{
    std::cout << name << " attacked " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage( unsigned int amount)
{
    HitPoints -= amount;
    std::cout << name << " took " << amount << " damage" << std::endl;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    HitPoints = amount;
    std::cout << name << " has been repaired up to " << amount << " points" << std::endl;
}

int ClapTrap::getEnergyPoint( void )
{
    return this->EnergyPoints;
}

std::string ClapTrap::getName( void )
{
    return this->name;
}

int ClapTrap::getAttackDamage( void )
{
    return this->AttackDamage;
}

int ClapTrap::getHitPoints( void )
{
    return this->HitPoints;
}
