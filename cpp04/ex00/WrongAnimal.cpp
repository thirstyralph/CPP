#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "worm";
}

WrongAnimal::WrongAnimal(const std::string& type) {
	this->type = type;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal has been exterminated" << std::endl;
}

/* ---- Setters ----- */
void	WrongAnimal::setType(const std::string& newType) {
	this->type = newType;
}

/* ---- Getters ----- */
std::string	WrongAnimal::getType() const{
	return (this->type);
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& old) {
	if (this != &old)
		this->setType(old.getType());
	return (*this);
}

void	WrongAnimal::makeSound(void) {
	std::cout << "..." << std::endl;
}
