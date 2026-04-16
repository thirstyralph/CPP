#include "Animal.hpp"

Animal::Animal() {
	this->type = "worm";
}

Animal::Animal(const std::string type){
	this->type = "worm";
}

Animal::~Animal() {
}

/* ---- Setters ----- */
void	setName(const std::string newName) {
	this->name = newName;
}

/* ---- Getters ----- */
std::string	getName() {
	return (this->name);
}

Animal	Animal::&operator=(const Animal& old) {
	if (this != old)
		return (this);
	this->setName(old.getName());
	return (*this);
}

