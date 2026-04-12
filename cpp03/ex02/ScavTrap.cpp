#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->setName("ScavTrap");
	this->definePoints(100, 50, 20);
}

void	ScavTrap::attack(const std::string &target) {
	std::cout << this->getName() << " dealt " <<  this->getAttackDamage() << " points of damage to  ";
	std::cout << target << " and now is questioning pacifism!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << this->getName() << " was painfully shredded." << std::endl;
}
