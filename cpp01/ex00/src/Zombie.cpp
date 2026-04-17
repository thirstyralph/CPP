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

/*	name getter */
std::string	Zombie::getName(void) const {
	return (this->name);
}

/*	name setter */
void	Zombie::setName(const std::string newName){
	this->name = newName;
}

void	Zombie::announce(void) {
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
