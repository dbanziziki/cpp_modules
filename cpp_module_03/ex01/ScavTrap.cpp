#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap() : ClapTrap() {
  std::cout << "ScavTrap " << this->name << " initialized" << std::endl;
  this->HitPoints = 100;
  this->EnergyPoints = 50;
  this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string const& name) : ClapTrap(name) {
  std::cout << "ScavTrap " << this->name << " initialized" << std::endl;
  this->HitPoints = 100;
  this->EnergyPoints = 50;
  this->AttackDamage = 20;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << this->name << " has been destroyed" << std::endl;
}

void ScavTrap::attack(std::string const& target) {
  std::cout << "ScavTrap " << this->name << " attacked " << target
            << ", causing " << this->AttackDamage << " points of damage!"
            << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src) : ClapTrap(src) {}

ScavTrap& ScavTrap::operator=(ScavTrap const& rhs) {
  ClapTrap::operator=(rhs);
  return *this;
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << this->name << " has enterred in Gate keeper mode."
            << std::endl;
}
