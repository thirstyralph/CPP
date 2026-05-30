#include "ShrubberyCreationForm.hpp"

ShruberryCreationForm::ShruberryCreationForm(const std::string &target)
	: AForm("ShruberryCreationForm", 145, 137),
	target(target) {}
	
void	ShruberryCreationForm::executedAction(){
	std::ofstream	file;

	file.open(target + "_shrubbery");
	if (!file.is_open()) {
		std::cout << "Error creating file!" << std::endl;
		return ;
	}
	file << ASCII_TREES;
	file.close();
}

