#include "HumanA.hpp"
/*
HumanA::HumanA(void)	{
	Weapon weapon("a rock I just found");
	this->name = "Jimbo";
	this->weapon = weapon;
};
*/
HumanA::HumanA(std::string name, Weapon& weapon)	
: name(name), weapon(weapon)
{}

void	HumanA::attack(void)	{
	std::cout << this->name << " attacks with " << this->weapon.getType() << '\n';
};
