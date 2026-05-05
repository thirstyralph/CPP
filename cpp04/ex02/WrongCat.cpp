#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->setType("WrongCat");
	std::cout << this->getType() << " A morbidly obese cat has been born" << std::endl;
}

WrongCat::~WrongCat(void) {
	std::cout << this->getType() << " has been collected for lard" << std::endl;
}

void	WrongCat::makeSound() {
	std::cout << this->getType() << ": MEOW I HATE MONDAYS MEOW" << std::endl;
}
