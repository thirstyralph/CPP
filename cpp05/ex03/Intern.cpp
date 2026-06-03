#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
}

Intern::~Intern() {
}

Forms hashForms(const std::string &str) {
	if (str == "PresidentialPardonForm") return (ppf);
	if (str == "RobotomyRequestForm") return (rrf);
	if (str == "ShrubberyCreationForm") return (scf);
	return (Unknown);

}

AForm	*Intern::makeForm(std::string &name, std::string &target) {
	AForm	*ret;

	switch(hashForms(name)) {
		case ppf:
			ret = new PresidentialPardonForm(target);
			break;
		case rrf:
			ret = new RobotomyRequestForm(target);
			break;
		case scf:
			ret = new ShrubberyCreationForm(target);
			break;
		default:
			return NULL;
	}
	return (ret);
}
