#include "Cat.hpp"

Cat::Cat() : brain() {
	this->setType("Cat");
	std::cout << this->getType() << ": Default constructor " << std::endl;
	this->brain = new Brain;
	for(int i = 0; i < 100; i++)
	{
		this->brain->setThought(i, "I MUST EXTERMINATE");
	}
}

Cat::Cat(const Cat& old) 
	: Animal (old)  {
	std::cout << this->getType() << ": Copy constructor" << std::endl;
	this->type = old.getType();
	this->brain = new Brain(*old.brain);
}

Cat&	Cat::operator=(const Cat& old) {
	if (this != &old) {
		this->setType(old.getType());
		delete this->brain;
		this->brain = new Brain(*old.brain);
	}
	std::cout << this->getType() << ": = operator overload" << std::endl;
	return (*this);
}

Cat::~Cat(void) {
	std::cout << this->getType() << ": Destructor" << std::endl;
	delete this->brain;
}

void	Cat::makeSound() const{
	std::cout << this->getType() << ": MEOW I HATE MONDAYS MEOW" << std::endl;
}
