#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <string>
#include <iostream>

class Bureaucrat {
	public:
						Bureaucrat(const unsigned int grade);
						Bureaucrat(const Bureaucrat &src);
		Bureaucrat&		operator=(const Bureaucrat &src);
						~Bureaucrat();
		unsigned int	getGrade(void);
	private:
		static const	std::string name;
		unsigned int	grade;
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &src);

#endif
