#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
	public:
						Bureaucrat(const std::string &name);
						Bureaucrat(const unsigned int grade);
						Bureaucrat(const std::string &name, const unsigned int grade);
						Bureaucrat(const Bureaucrat &src);
		Bureaucrat&		operator=(const Bureaucrat &src);
						~Bureaucrat();
		unsigned int	getGrade(void) const;
		std::string		getName(void) const;
		void			signForm(AForm &form);
		void			incrementGrade(const unsigned int amount);
		void			decrementGrade(const unsigned int amount);
		class			GradeTooHighException : public std::exception {
			public:
				char const* what() const throw();
		};
		class			GradeTooLowException : public std::exception {
			public:
				char const* what() const throw();
		};
	private:
		std::string const	name;
		unsigned int		grade;
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &src);

#endif
