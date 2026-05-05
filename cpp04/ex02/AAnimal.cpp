#include "AAnimal.hpp"

AAnimal::AAnimal() {
	this->type = "worm";
}

AAnimal::AAnimal(const std::string& type) {
	this->type = type;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal has been exterminated" << std::endl;
}

/* ---- Setters ----- */
void	AAnimal::setType(const std::string& newType) {
	this->type = newType;
}

/* ---- Getters ----- */
std::string	AAnimal::getType() const{
	return (this->type);
}

AAnimal&	AAnimal::operator=(const AAnimal& old) {
	if (this != &old)
		this->setType(old.getType());
	return (*this);
}

/*
void	AAnimal::makeSound(void) const{
	std::cout << "there is a house in New Orleans ... They call the Rising Sun" << std::endl;
}
*/
