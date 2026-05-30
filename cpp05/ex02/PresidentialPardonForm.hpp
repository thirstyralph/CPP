#ifndef PRESIDENTIALPARDONFORM_HPP 
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"

class	PresidentialPardonForm : public AForm {
	public:
		void				executedAction(void);
	private:
		const unsigned int	gradeToSign = 145;
		const unsigned int	gradeToExecute = 137;
}

#endif

