#include "HumanA.hpp"

<<<<<<< HEAD
=======
/*
HumanA::HumanA(void)	{
	Weapon weapon("a rock I just found");
	this->name = "Jimbo";
	this->weapon = weapon;
};
*/
>>>>>>> 0ef6ce4bb12be64805b5937c1d1d1fadb16f1718
HumanA::HumanA(std::string name, Weapon& weapon)	
: name(name), weapon(weapon)
{};

void	HumanA::attack(void)	{
	std::cout << this->name << " attacks with " << this->weapon.getType() << '\n';
};
