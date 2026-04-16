#include "Animal.hpp"

Animal::Animal() {
	this->type = "worm";
}

Animal::Animal(const std::string type){
	this->type = type;
}

Animal::~Animal() {
	std::cout << "Animal has been exterminated" << std::endl;
}

/* ---- Setters ----- */
void	Animal::setType(const std::string newType) {
	this->type = newType;
}

/* ---- Getters ----- */
std::string	Animal::getType() {
	return (this->type);
}

Animal	Animal::&operator=(const Animal& old) {
	if (this != old)
		return (this);
	this->setName(old.getName());
	return (*this);
}

