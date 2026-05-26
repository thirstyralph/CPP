#ifndef FORM_HPP
# define FORM_HPP
#include <string>
#include <iostream>

class Form {
	public:
						Form(const std::string &name);
						Form(const unsigned int gradeToSign, const unsigned int gradeToExecute);
						Form(const std::string &name, const unsigned int gradeToSign, const unsigned int gradeToExecute);
						Form(const Form &src);
//		Form&		operator=(const Form &src);
						~Form();
		void			beSigned(const Bureaucrat &signer);
		unsigned int	getGradeToSign(void) const;
		unsigned int	getGradeToExecute(void) const;
		std::string		getName(void) const;
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

std::ostream	&operator<<(std::ostream &out, const Form &src);

#endif
