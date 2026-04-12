#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->setName("Fragtrap");
	this->definePoints(100, 100, 30);
}

FragTrap::~FragTrap() {
	std::cout << this->getName() << " says farewell!" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "Come on guys, anybody wanna highfive " << this->getName() << "?" << std::endl;
}
