#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

void	ScavTrap::attack(const std::string &target) {
	std::cout << this->getName() << " dealt " <<  this->getAttackDamage() << " points of damage to  ";
	std::cout << target << " and now is questioning pacifism!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << this->getName() << " was painfully shredded." << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << this->getName() << " has been switched into gatekeeper mode!" << std::endl;
}

