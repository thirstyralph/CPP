#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() {
	this->setType("Dog");
	std::cout << this->getType() << " barks its way into existence" << std::endl;
	this->noggin = new Brain();
}

Dog::~Dog(void) {
	std::cout << this->getType() << " has been eliminated" << std::endl;
	delete this->noggin;
}

void	Dog::makeSound() const{
	std::cout << this->getType() << ": WOOF WOOF" << std::endl;
}
