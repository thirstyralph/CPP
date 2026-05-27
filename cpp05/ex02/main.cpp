#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	bureaucratBasicTest(void) {

	for (unsigned int i = 0; i < 200; ++i) {
		{
		try {
			Bureaucrat	a(i);
			if ((a.getGrade() == i) && (i >= 1 &&  i <= 150))
				std::cout << "Bureaucrat created with rank " << i << std::endl;
			}
		catch (std::exception const& e){
				std::cout << "Bureaucrat NOT created with rank " << e.what() << std::endl;
		}
		}
	}
	return (1);
}

int	bureaucratGetNameTest(void) {
	std::string	name = "";
	Bureaucrat	*a;

	for (unsigned int i = 0; i < 10; ++i) {
		a = new Bureaucrat(name);
		if (a->getName() == name)
			std::cout << "Name test number " << i << " passed" << std::endl;
		else
			std::cout << "Name test number " << i << " failed" << std::endl;

		name.append("a");
		delete a;
	}
	return (1);
}

int	IncrementGradeTest() {
	Bureaucrat	a(150);
	for (unsigned int i = 150; i <= 1; --i) {
		if (a.getGrade() != i) {
			std::cout << "IncrementGradeTest Failed" << std::endl;
			return (0);
		}
		a.incrementGrade(1);
	}
	std::cout << "IncrementGradeTest Passed" << std::endl;
	return (1);
}

int	DecrementGradeTest() {
	Bureaucrat	a(1);
	for (unsigned int i = 1; i <= 150; ++i) {
		if (a.getGrade() != i) {
			std::cout << "DecrementGradeTest Failed at grade " << i << std::endl;
			return (0);
		}
		a.decrementGrade(1);
	}
	std::cout << "DecrementGradeTest Passed" << std::endl;
	return (1);
}

int	insertionOverloadTest() {
	Bureaucrat	a(90);
	Bureaucrat	b("paco");
	Bureaucrat	c("pepe", 89);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	return (1);
}

int	formCopyConstructorTest() {
	for (unsigned int i = 1; i < 150; ++i) { 
		for (unsigned int j = 1; j < 150; ++j) { 
		{
			try {
				AForm	a("formless form", i, j);
			}	
			catch (std::exception const& e){
				std::cout << "form forming failed" << std::endl;
				return (0);
			}
		}
		}
	}
	return (1);
}

int	formInsertionTest() {
	AForm	a("uninformed uniform form", 30, 1);
	std::cout << a << std::endl;	
	return (1);
}

int	formGradeGettersTest() {
	unsigned int	gradeToSign = 30;
	unsigned int	gradeToExecute = 1;
	AForm	a("uninformed uniform form", gradeToSign, gradeToExecute);

	if (a.getGradeToSign() == gradeToSign && a.getGradeToExecute() == gradeToExecute)
		return (1);
	return (0);
}

int	formBeSignedTest() {
	Bureaucrat	a("top level wizard Bureaucrat master", 1);
	Bureaucrat	b("unknowing ignorant rookie", 150);
	AForm		c("easiest form in the world to sign", 150, 1);
	AForm		d("challenging formative form", 30, 1);

	a.signForm(c);
	b.signForm(c);
	try {
		b.signForm(d);
	}
	catch (std::exception const& e){
	}
	try {
		a.signForm(d);
	}
	catch (std::exception const& e){
	}
	return (1);
}

int	main(void) {
	int	passedTests = 0;
	int	totalTests = 9;
	/* Bureaucrat */
	//int constructors
	passedTests += bureaucratBasicTest();
	//getName
	passedTests += bureaucratGetNameTest();
	//IncrementGrade
	passedTests += IncrementGradeTest();
	//DecrementGrade
	passedTests += DecrementGradeTest();
	//insertion overload
	passedTests += insertionOverloadTest();
	/* AForm */
	// copy constructor
	passedTests += formCopyConstructorTest();
	// parametric constructor
	// beSigned
	passedTests += formBeSignedTest();
	// grade getters
	passedTests += formGradeGettersTest();
	// insertion overload
	passedTests += formInsertionTest();
	std::cout << passedTests << "/" << totalTests << " Tests passed" << std::endl;
	return (0);
}
