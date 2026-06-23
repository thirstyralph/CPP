#ifndef	ROBOTOMYREQUESTFORM_HPP 
#define ROBOTOMYREQUESTFORM_HPP

#include <fstream>
#include <cstdlib>
#include "AForm.hpp"

class	RobotomyRequestForm : public AForm {
	public:
								RobotomyRequestForm();
								RobotomyRequestForm(
									const std::string &target
								);
								~RobotomyRequestForm();
		RobotomyRequestForm&	operator=(const RobotomyRequestForm &src);
		void					executedAction(void) const;
		const std::string				&getTarget(void) const;
	private:
		const std::string		target;
};

#endif

