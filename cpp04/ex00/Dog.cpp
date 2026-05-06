#include "Dog.hpp"

Dog::Dog() {
	this->setType("Dog");
	std::cout << this->getType() << " barks its way into existence" << std::endl;
}

Dog::Dog(const Dog& old) 
	: Animal(old) {
	this->type = old.getType();
}

Dog&	Dog::operator=(const Dog& old) {
	if (this != &old)
		this->setType(old.getType());
	return (*this);
}

Dog::~Dog(void) {
	std::cout << this->getType() << " has been eliminated" << std::endl;
}

void	Dog::makeSound() const{
	std::cout << this->getType() << ": WOOF WOOF" << std::endl;
}
