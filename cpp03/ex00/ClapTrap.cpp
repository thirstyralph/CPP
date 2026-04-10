#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	this->name = "ClapTrap";
	std::cout << this->name << " has just been created!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& old) {
	this->name = old.getName();
	this->hitPoints = old.getHitPoints();
	this->energyPoints = old.getEnergyPoints();
	this->attackDamage = old.getAttackDamage();
}

ClapTrap::~ClapTrap() {
	std::cout << "We finally got rid of " << this->name << std::endl;
}

ClapTrap::ClapTrap &operator=(const ClapTrap &src) {
	if (this != &src) {
		this->name = old.getName();
		this->hitPoints = old.getHitPoints();
		this->energyPoints = old.getEnergyPoints();
		this->attackDamage = old.getAttackDamage();
	}
	return (this);
}

int	claptrap::getHitpoints() {
	return (this->hitpoints);
}

int	claptrap::getEnergyPoints() {
	return (this->energyPointss);
}

int	claptrap::getAttackDamage() {
	return (this->attackDamage);
}

void	ClapTrap::attack(const std::string& target) {
	std::cout << this->name << " attacks " << target << " causing " << attackDamage << "points of damage!" std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (amount < this->energyPoints)
		this->energyPoints -= amount;
	else {
		this->energyPoints = 0;
		std::cout << this->name << "just died" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	this->energyPoints += amount;
}
