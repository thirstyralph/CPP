#ifndef	PRESIDENTIALPARDONFORM_HPP 
#define PRESIDENTIALPARDONFORM_HPP

#include <fstream>
#include <cstdlib>
#include "AForm.hpp"

class	PresidentialPardonForm : public AForm {
	public:
								PresidentialPardonForm();
								PresidentialPardonForm(
									const std::string &target
								);
								~PresidentialPardonForm();
		PresidentialPardonForm&	operator=(const PresidentialPardonForm &src);
		void					executedAction(void) const;
		std::string				getTarget(void) const;
	private:
		const std::string		target;
};

#endif

