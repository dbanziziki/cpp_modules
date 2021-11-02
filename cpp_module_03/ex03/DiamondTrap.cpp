#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
    : ClapTrap("Default_clap_name"), ScavTrap(), FragTrap() {
    this->name = "Default";
    std::cout << "DiamondTrap " << this->name << " initialized" << std::endl;
    this->HitPoints = FragTrap::HitPoints;
    this->EnergyPoints = ScavTrap::EnergyPoints;
    this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(std::string const &name)
    : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap() {
    this->name = name;
    std::cout << "DiamondTrap " << this->name << " initialized" << std::endl;
    this->HitPoints = FragTrap::HitPoints;
    this->EnergyPoints = ScavTrap::EnergyPoints;
    this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << this->name << " has been destroyed"
              << std::endl;
}

void DiamondTrap::attack(std::string const &target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap " << this->name << " ClapTrap name is "
              << ClapTrap::getName() << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs) {
    ClapTrap::operator=(rhs);
    return *this;
}