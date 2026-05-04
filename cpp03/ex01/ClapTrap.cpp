#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
	this->name = name;
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
/*-------------- Setters -------------------------*/
void			ClapTrap::setHitPoints(const unsigned int value) {
	this->hitPoints = value;
}

void			ClapTrap::setEnergyPoints(const unsigned int value) {
	this->energyPoints = value;
}

void			ClapTrap::setAttackDamage(const unsigned int value) {
	this->attackDamage = value;
}

/*-------------- Getters -------------------------*/
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
	if (this->energyPoints <= 0) {
		std::cout << this->name << " cannot attack because it's out of energy points!" << std::endl;
		return;
	}

	if (this->hitPoints <= 0) {
		std::cout << this->name << " cannot attack because it's out of hit points!" << std::endl;
		return;
	}
	this->energyPoints -= 1;
	std::cout << this->name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints > 0) {
		std::cout << this->name << " has received " << amount << " points of damage " << std::endl;
		std::cout << "and is left with " << this->hitPoints << " Energy points" << std::endl;
		if (amount < this->hitPoints)
			this->hitPoints -= amount;
		else {
			this->hitPoints = 0;
			std::cout << this->name << " just died" << std::endl;
		}
	}
	else
		std::cout << "The dead corpse of " << this->name << " has been dealt " << amount << " points of damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPoints <= 0) {
		std::cout << this->name << " cannot be repaired because it's out of energy points!" << std::endl;
		return;
	}

	if (this->hitPoints <= 0) {
		std::cout << this->name << " cannot be repaired because it's out of hit points!" << std::endl;
		return;
	}
	this->energyPoints--;
	this->hitPoints += amount;
}
