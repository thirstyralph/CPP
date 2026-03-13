#include "Weapon.hpp"

Weapon::Weapon(){
	this->weapon = "Stick from the floor";
}

Weapon::Weapon(std::string type){
	this->type = type;
}

std::string	getType(){
	return (this->type);
}

void	setType(std::string type){
	this->type = type;
}
