#include "Bureaucrat.hpp"

/* Definition of exceptions */

char const*	Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat grade too high";
}

char const*	Bureaucrat::GradeTooLowException::what() const throw() {
	return "Bureaucrat grade too low";
}

/* Constructors */
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

Bureaucrat::Bureaucrat(const std::string &name, unsigned int grade) : name(name), grade(150) {
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

/* Increment and decrement */
void	Bureaucrat::incrementGrade(const unsigned int amount) {
	if (grade == (amount < 1))
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = grade - amount;
}

void	Bureaucrat::decrementGrade(const unsigned int amount) {
	if (grade == (amount > 150))
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = grade + amount;
}

/* Getters */
unsigned int Bureaucrat::getGrade(void) const{
	return (this->grade);
}

std::string Bureaucrat::getName(void) const{
	return (this->name);
}

/* destructor */
Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrat default destructor" << std::endl;
}

/* Operator overloads */
Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &src) {
	if (this != &src) {
		this->grade = src.grade;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src) {
	out << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
	return (out);
}
