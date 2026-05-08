#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor" << std::endl;
	this->type = "";
}

Animal::Animal(const Animal& type) {
	std::cout << "Animal copy constructor" << std::endl;
	this->type = type.getType();
}

Animal::Animal(const std::string& type) {
	std::cout << "Animal string type constructor" << std::endl;
	this->type = type;
}

Animal::~Animal() {
	std::cout << "Animal default destructor" << std::endl;
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
	std::cout << "there is a House in New Orleans, they Call the Rising Sun" << std::endl;
}
