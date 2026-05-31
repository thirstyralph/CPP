#include "AForm.hpp"

/* Definition of exceptions */
char const*	AForm::GradeTooHighException::what() const throw() {
	return "grade too high";
}

char const*	AForm::GradeTooLowException::what() const throw() {
	return "grade too low";
}

/* Constructors */
AForm::AForm(const std::string &name, unsigned int gradeToSign, unsigned int gradeToExecute) :
		name(name),
		isSigned(false),
		gradeToSign(gradeToSign),
		gradeToExecute(gradeToExecute)
{
	unsigned int	max = 150;
	unsigned int	min = 1;
	std::cout << "form unsigned int constructor with values " << gradeToSign << " " <<  gradeToExecute << std::endl;
	if ((gradeToSign > max) || (gradeToExecute > max))
		throw AForm::GradeTooLowException();
	else if ((gradeToSign < min) || (gradeToExecute < min))
		throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm &src) :
	name(src.name),
	isSigned(false),
	gradeToSign(src.gradeToSign),
	gradeToExecute(src.gradeToExecute)
{
	std::cout << "AForm copy constructor" << std::endl;
}

/* Getters */
unsigned int AForm::getGradeToExecute(void) const{
	return (this->gradeToExecute);
}

unsigned int AForm::getGradeToSign(void) const{
	return (this->gradeToSign);
}

std::string AForm::getName(void) const{
	return (this->name);
}

bool AForm::getIsSigned(void) {
	return (isSigned);
}

/* destructor */
AForm::~AForm(void) {
	std::cout << "AForm default destructor" << std::endl;
}

/* beSigned */
void	AForm::beSigned(const Bureaucrat &signer) {
	if (signer.getGrade() < gradeToSign)
		isSigned = true;
	else
		throw AForm::GradeTooLowException();
}
/* execute */
void	AForm::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() > gradeToExecute)
		throw AForm::GradeTooLowException();
	else
	{
		try
		{
			executedAction();
		}
		catch (std::exception const& e)
		{
			throw e;
		}
	}
}

/* Operator overloads */
std::ostream &operator<<(std::ostream &out, const AForm &src) {
	out << src.getName() << ", form with execution level " << src.getGradeToExecute();
	out << " and signing level " << src.getGradeToSign()  << std::endl;
	return (out);
}
