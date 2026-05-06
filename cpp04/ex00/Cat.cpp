#include "Cat.hpp"

Cat::Cat() {
	this->setType("Cat");
	std::cout << this->getType() << " A morbidly obese cat has been born" << std::endl;
}

Cat::~Cat(void) {
	std::cout << this->getType() << " has been collected for lard" << std::endl;
}

void	Cat::makeSound() const{
	std::cout << this->getType() << ": MEOW I HATE MONDAYS MEOW" << std::endl;
}
