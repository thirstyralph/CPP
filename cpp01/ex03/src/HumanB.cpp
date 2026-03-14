#include "HumanB.hpp"

HumanB::HumanB()
: weapon(nullptr)	{
	this->name = "General Generic name";
}

HumanB::HumanB(std::string name)
: weapon(nullptr)	{
	this->name = name;
};

HumanB::HumanB(std::string name, Weapon &weapon){
	this->name = name;
	this->weapon = &weapon;
};

void	HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
};

void	HumanB::attack(void)	{
	std::cout << this->name << " attacks with " << this->weapon->getType() << "\n";
}
