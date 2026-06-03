#include "PresidentialPardonForm.hpp"

/* constructor */
PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: AForm("PresidentialPardonForm", 25, 5),
	target(target) {}

/* Destructor */
PresidentialPardonForm::~PresidentialPardonForm(void) {}

/* Getters */
std::string	PresidentialPardonForm::getTarget(void) const{
	return (this->target);
}

/* Custom executed action */
void	PresidentialPardonForm::executedAction(void) const{
	std::cout << "*Ajem*" << std::endl;
	std::cout << this->getTarget() << " has been pardone by Zaphod Beeblebrox" << std::endl;
}
