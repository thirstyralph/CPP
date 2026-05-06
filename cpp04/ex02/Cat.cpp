#include "Cat.hpp"

Cat::Cat() {
	this->setType("Cat");
	std::cout << this->getType() << " A morbidly obese cat has been born" << std::endl;
	this->noggin = new Brain();
}

Cat::Cat(const Cat& old) 
	: AAnimal (old)  {
	this->type = old.getType();
}

Cat&	Cat::operator=(const Cat& old) {
	if (this != &old)
		this->setType(old.getType());
	return (*this);
}

Cat::~Cat(void) {
	std::cout << this->getType() << " has been collected for lard" << std::endl;
	delete this->noggin;
}

void	Cat::makeSound() const{
	std::cout << this->getType() << ": MEOW I HATE MONDAYS MEOW" << std::endl;
}
