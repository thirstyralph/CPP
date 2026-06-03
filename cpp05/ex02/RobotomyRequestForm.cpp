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
	srand(time(0));
	int	randonNum = rand() % 2;

	std::cout << "BRZRZZZZZZRRRRR" << std::endl;
	std::cout << "*HORRYFYING ROBOT SCREAMS" << std::endl;
	std::cout << "BRZRZZZZZZRRRRR" << std::endl;
	if (randonNum == 1)
		std::cout << this->getTarget() << " has been succcessfuly robotomized!" << std::endl;
	else
		std::cout << this->getTarget() << " has NOT been succcessfuly robotomized!" << std::endl;

}
