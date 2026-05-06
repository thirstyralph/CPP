#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::~FragTrap() {
	std::cout << this->getName() << " says farewell!" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "Come on guys, anybody wanna highfive " << this->getName() << "?" << std::endl;
}
