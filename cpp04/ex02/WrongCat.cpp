#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->setType("WrongCat");
	std::cout << this->getType() << ": Default constructor" << std::endl;
	this->brain = new Brain;
}

WrongCat::WrongCat(const WrongCat& old)
	: WrongAnimal (old) {
	std::cout << this->getType() << ": Copy constructor" << std::endl;
	this->type = old.getType();
	this->brain = new Brain(*old.brain);

}

WrongCat& WrongCat::operator=(const WrongCat& old) {
	if (this != &old) {
		this->setType(old.getType());
		delete this->brain;
		this->brain = new Brain(*old.brain);
	}
	std::cout << this->getType() << ": = operator overload" << std::endl;
	return (*this);
}

WrongCat::~WrongCat(void) {
	std::cout << this->getType() << ": Default destructor" << std::endl;
	delete this->brain;
}

void	WrongCat::makeSound() {
	std::cout << this->getType() << ": MEOW I HATE MONDAYS MEOW" << std::endl;
}
