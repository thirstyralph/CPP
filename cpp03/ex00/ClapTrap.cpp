#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	this->name = "ClapTrap";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 10;
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

ClapTrap& ClapTrap::operator=(const ClapTrap& src) {
	if (this != &src) {
		this->name = src.getName();
		this->hitPoints = src.getHitPoints();
		this->energyPoints = src.getEnergyPoints();
		this->attackDamage = src.getAttackDamage();
	}
	return (*this);
}

unsigned int	ClapTrap::getHitPoints() const{
	return (this->hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints() const{
	return (this->energyPoints);
}

unsigned int	ClapTrap::getAttackDamage() const{
	return (this->attackDamage);
}

std::string	ClapTrap::getName() const{
	return (this->name);
}

void	ClapTrap::attack(const std::string& target) {
	std::cout << this->name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
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
