#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor" << std::endl;
	this->type = "";
}

Animal::Animal(const Animal& type) {
	this->type = type.getType();
}

Animal::Animal(const std::string& type) {
	this->type = type;
}

Animal::~Animal() {
	std::cout << "Animal Destructor" << std::endl;
}

/* ---- Setters ----- */
void	Animal::setType(const std::string& newType) {
	this->type = newType;
}

/* ---- Getters ----- */
std::string	Animal::getType() const{
	return (this->type);
}

Animal&	Animal::operator=(const Animal& old) {
	if (this != &old)
		this->setType(old.getType());
	return (*this);
}

void	Animal::makeSound(void) const{
	std::cout << "There is a house in New Orleans, they call the Rising Sun" << std::endl;
}
