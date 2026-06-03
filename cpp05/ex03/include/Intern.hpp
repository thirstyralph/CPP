#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

enum Forms {
	ppf,
	rrf,
	scf,
	Unknown
};

class	Intern {
	public:
		Intern();
		~Intern();
		AForm	*makeForm(const std::string &name,const std::string &target);
};

int	internTest(void);

#endif
