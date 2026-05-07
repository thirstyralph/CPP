#include "Dog.hpp"

Dog::Dog() : brain() {
	this->setType("Dog");
	std::cout << this->getType() << " barks its way into existence" << std::endl;
	this->brain = new Brain;
}

Dog::Dog(const Dog& old) 
	: Animal(old) {
	this->type = old.getType();
	//delete this->brain;
	this->brain = new Brain(*old.brain);
}

Dog&	Dog::operator=(const Dog& old) {
	if (this != &old) {
		this->setType(old.getType());
		// this->brain(old.getBrain());
		delete this->brain;
		this->brain = new Brain(*old.brain);
	}
	return (*this);
}

Dog::~Dog(void) {
	std::cout << this->getType() << " has been eliminated" << std::endl;
	delete this->brain;
}

void	Dog::makeSound() const{
	std::cout << this->getType() << ": WOOF WOOF" << std::endl;
}

const Brain&	Dog::getBrain() const{
	return (*this->brain);
}
