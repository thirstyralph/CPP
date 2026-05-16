#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(unsigned int grade) {
	unsigned int	max = 150;
	unsigned int	min = 1;
	std::cout << "Bureaucrat unsigned int constructor with value " << grade <<std::endl;
	if (grade > max)
		throw std::out_of_range("There is no grade bellow 150");
	else if (grade < min)
		throw std::out_of_range("there is no grade above 1");
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	if (this != &src)
		this->grade = src.grade;
	std::cout << "Bureaucrat copy constructor" << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrat default destructor" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &src) {
	if (this != &src) {
		this->grade = src.grade;
	}
	return (*this);
}

unsigned int Bureaucrat::getGrade(void) {
	return (this->grade);
}
