#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "FragTrap " << this->name << " initialized" << std::endl;
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name) {
    std::cout << "FragTrap " << this->name << " initialized" << std::endl;
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->name << " has been destroyed"
              << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) { *this = src; }

FragTrap &FragTrap::operator=(FragTrap const &rhs) {
    ClapTrap::operator=(rhs);
    return *this;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "High five guys" << std::endl;
}