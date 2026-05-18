#include "Bureaucrat.hpp"

char const*	Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat grade too high";
}

char const*	Bureaucrat::GradeTooLowException::what() const throw() {
	return "Bureaucrat grade too low";
}

Bureaucrat::Bureaucrat(const std::string &name) : name(name), grade(150) {
	std::cout << "bureaucrat string constructor with name " << name <<std::endl;
}

Bureaucrat::Bureaucrat(unsigned int grade) : name("Hermes Conrad"), grade(150) {
	unsigned int	max = 150;
	unsigned int	min = 1;
	std::cout << "bureaucrat unsigned int constructor with value " << grade <<std::endl;
	if (grade > max)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < min)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
	: name(src.name), grade(src.grade) 
{
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

unsigned int Bureaucrat::getGrade(void) const{
	return (this->grade);
}

std::string Bureaucrat::getName(void) const{
	return (this->name);
}
