#ifndef FORM_HPP
# define FORM_HPP
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"


class Bureaucrat;

class AForm {
	public:
//						AForm(const std::string &name);
//						AForm(const unsigned int gradeToSign, const unsigned int gradeToExecute);
						AForm(const std::string &name, const unsigned int gradeToSign, const unsigned int gradeToExecute);
						AForm(const AForm &src);
//		AForm&		operator=(const AForm &src);
		virtual			~AForm();
		/* executors */
		virtual void	beSigned(const Bureaucrat &signer);
		void			execute(Bureaucrat const & executor) const;
		virtual void	executedAction(void) const = 0;
		/* getters */
		unsigned int	getGradeToSign(void) const;
		unsigned int	getGradeToExecute(void) const;
		std::string		getName(void) const;
		virtual const std::string	&getTarget(void) const = 0;
		bool			getIsSigned();
		/* Exceptions */
		class			GradeTooHighException : public std::exception {
			public:
				char const* what() const throw();
		};
		class			GradeTooLowException : public std::exception {
			public:
				char const* what() const throw();
		};

	private:
		std::string const		name;
		bool					isSigned;
		const unsigned int		gradeToSign;
		const unsigned int		gradeToExecute;
};

std::ostream	&operator<<(std::ostream &out, const AForm &src);

#endif
