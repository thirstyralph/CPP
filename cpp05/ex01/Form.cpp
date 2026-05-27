#include "Form.hpp"

/* Definition of exceptions */
char const*	Form::GradeTooHighException::what() const throw() {
	return "grade too high";
}

char const*	Form::GradeTooLowException::what() const throw() {
	return "grade too low";
}

/* Constructors */
Form::Form(const std::string &name, unsigned int gradeToSign, unsigned int gradeToExecute) :
		name(name),
		isSigned(false),
		gradeToSign(gradeToSign),
		gradeToExecute(gradeToExecute)
{
	unsigned int	max = 150;
	unsigned int	min = 1;
	std::cout << "form unsigned int constructor with values " << gradeToSign << " " <<  gradeToExecute << std::endl;
	if ((gradeToSign > max) || (gradeToExecute > max))
		throw Form::GradeTooLowException();
	else if ((gradeToSign < min) || (gradeToExecute < min))
		throw Form::GradeTooHighException();
}

Form::Form(const Form &src) :
	name(src.name),
	isSigned(false),
	gradeToSign(src.gradeToSign),
	gradeToExecute(src.gradeToExecute)
{
	std::cout << "Form copy constructor" << std::endl;
}

/* Getters */
unsigned int Form::getGradeToExecute(void) const{
	return (this->gradeToExecute);
}

unsigned int Form::getGradeToSign(void) const{
	return (this->gradeToSign);
}

std::string Form::getName(void) const{
	return (this->name);
}

bool Form::getIsSigned(void) {
	return (isSigned);
}

/* destructor */
Form::~Form(void) {
	std::cout << "Form default destructor" << std::endl;
}

/* beSigned */
void	Form::beSigned(const Bureaucrat &signer) {
	if (signer.getGrade() < gradeToSign)
		isSigned = true;
	else
		throw Form::GradeTooLowException();
}

/* Operator overloads */
std::ostream &operator<<(std::ostream &out, const Form &src) {
	out << src.getName() << ", form with execution level " << src.getGradeToExecute();
	out << " and signing level " << src.getGradeToSign()  << std::endl;
	return (out);
}
