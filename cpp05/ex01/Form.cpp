#include "Form.hpp"

/* Definition of exceptions */
char const*	Form::GradeTooHighException::what() const throw() {
	return "Form grade too high";
}

char const*	Form::GradeTooLowException::what() const throw() {
	return "Form grade too low";
}

/* Constructors */
Form::Form(const std::string &name) : name(name), gradeToSign(150), gradeToExecute(1) {
	std::cout << "form string constructor with name " << name <<std::endl;
}

Form::Form(const unsigned int gradeToSign, const unsigned int gradeToExecute) :
		name("Unnamed Form"),
		gradeToSign(gradeToSign),
		gradeToExecute(gradeToExecute) 
{
	unsigned int	max = 150;
	unsigned int	min = 1;
	std::cout << "form unsigned int constructor with values " << gradeToSign << " " << gradeToExecute << std::endl;
	if ((gradeToSign > max) || (gradeToExecute > max))
		throw Form::GradeTooLowException();
	else if ((gradeToSign < min) || (gradeToExecute < min))
		throw Form::GradeTooHighException();
}

Form::Form(const std::string &name, unsigned int gradeToSign, unsigned int gradeToExecute) :
		name(name),
		gradeToSign(gradeToSign),
		gradeToExecute(gradeToExecute)
{
	unsigned int	max = 150;
	unsigned int	min = 1;
	std::cout << "form unsigned int constructor with values " << gradeToSign << "" <<  gradeToExecute << std::endl;
	if ((gradeToSign > max) || (gradeToExecute > max))
		throw Form::GradeTooLowException();
	else if ((gradeToSign < min) || (gradeToExecute < min))
		throw Form::GradeTooHighException();
}

Form::Form(const Form &src)
	: name(src.name),
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

/* destructor */
Form::~Form(void) {
	std::cout << "Form default destructor" << std::endl;
}

/* Operator overloads */
/*		Disabled because const values
Form&	Form::operator=(const Form &src) : gradeToSign(src.gradeToSign) :k  {
	if (this != &src) {
		this->gradeToSign = src.gradeToSign;
		this->gradeToExecute = src.gradeToExecute;
	}
	return (*this);
}
*/

std::ostream &operator<<(std::ostream &out, const Form &src) {
	out << src.getName() << ", form with execution level " << src.getGradeToExecute();
	out << " and signing level " << src.getGradeToSign()  << std::endl;
	return (out);
}
