#include "Dog.hpp"

Dog::Dog() : brain() {
	this->setType("Dog");
	std::cout << this->getType() << ": Default constructor " << std::endl;
	this->brain = new Brain;
}

Dog::Dog(const Dog& old) 
	: AAnimal(old) {
	std::cout << this->getType() << ": copy constructor constructor " << std::endl;
	this->brain = new Brain(*old.brain);
}

Dog&	Dog::operator=(const Dog& old) {
	if (this != &old) {
		this->setType(old.getType());
		delete this->brain;
		this->brain = new Brain(*old.brain);
	}
	std::cout << this->getType() << ": = operator overload" << std::endl;
	return (*this);
}

Dog::~Dog(void) {
	std::cout << this->getType() << ": Destructor" << std::endl;
	delete this->brain;
}

void	Dog::makeSound() const{
	std::cout << this->getType() << ": WOOF WOOF" << std::endl;
}
/*
const Brain&	Dog::getBrain() const{
	return (*this->brain);
} 
*/
