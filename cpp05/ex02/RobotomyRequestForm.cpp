#include "RobotomyRequestForm.hpp"

/* constructor */
RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: AForm("RobotomyRequestForm", 72, 137),
	target(target) {}

/* Destructor */
RobotomyRequestForm::~RobotomyRequestForm(void) {}

/* Getters */
std::string	RobotomyRequestForm::getTarget(void) const{
	return (this->target);
}

/* Custom executed action */
void	RobotomyRequestForm::executedAction(void) const{
	std::cout << "BRZRZZZZZZRRRRR" << std::endl;
	std::cout << "*HORRYFYING ROBOT SCREAMS" << std::endl;
	std::cout << "BRZRZZZZZZRRRRR" << std::endl;
}
