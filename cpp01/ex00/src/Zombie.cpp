#include "Zombie.hpp"

/*
	Zombie Class methods
*/
/*	Default constructor */
Zombie::Zombie() {
	this->name = "Bigus Dickus";
}
/*	Parameterized constructor */
Zombie::Zombie(std::string name) {
	this->name = name;
}
/*	Destructor */
Zombie::~Zombie(){
	std::cout << this->name << " has been slain\n";
}

