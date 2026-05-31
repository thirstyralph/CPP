#include "ShrubberyCreationForm.hpp"

/* constructor */
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: AForm("ShrubberyCreationForm", 145, 137),
	target(target) {}

/* Destructor */
ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

/* Getters */
std::string	ShrubberyCreationForm::getTarget(void) const{
	return (this->target);
}

/* Custom executed action */
void	ShrubberyCreationForm::executedAction() const{
	std::ofstream	file;

	file.open(std::string(this->target + "_shrubbery").c_str());
	if (!file.is_open()) {
		std::cout << "Error creating file!" << std::endl;
		return ;
	}
	file << ASCII_TREES;
	file.close();
}
