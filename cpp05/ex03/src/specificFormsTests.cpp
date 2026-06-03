#include "specificFormsTests.hpp"

int	ShrubberyCreationFormConstructorTest(void) {
	ShrubberyCreationForm	a("raymond");
	ShrubberyCreationForm	&b = a;
	ShrubberyCreationForm	c(b);
	if (c.getTarget() != a.getTarget())
		return 1;
	return (0);
}

int	ShrubberyCreationFormExecutedActionTest(void) {
	ShrubberyCreationForm	a("paco");

	try {
		a.executedAction();
	}
	catch (std::exception &e) {
		return (1);	
	}
	return (0);
}

int	RobotomyRequestFormConstructorTest(void) {
	RobotomyRequestForm	a("raymond");
	RobotomyRequestForm	&b = a;
	RobotomyRequestForm	c(b);

	if (c.getTarget() != a.getTarget())
		return 1;
	return (0);
}

int	RobotomyRequestFormExecutedActionTest(void) {
	RobotomyRequestForm	a("paco");

	try {
		a.executedAction();
	}
	catch (std::exception &e) {
		return (1);	
	}
	return (0);
}

int	PresidentialPardonFormConstructorTest(void) {
	PresidentialPardonForm	a("raymond");
	PresidentialPardonForm	&b = a;
	PresidentialPardonForm	c(b);

	if (c.getTarget() != a.getTarget())
		return 1;
	return (0);
}

int	PresidentialPardonFormExecutedActionTest(void) {
	PresidentialPardonForm	a("paco");

	try {
		a.executedAction();
	}
	catch (std::exception &e) {
		return (1);	
	}
	return (0);
}

int	ShrubberyCreationFormTestSuite(void) {
	int	failedTests = 0;

	failedTests += ShrubberyCreationFormConstructorTest();
	failedTests += ShrubberyCreationFormExecutedActionTest();
	failedTests += RobotomyRequestFormConstructorTest();
	failedTests += RobotomyRequestFormExecutedActionTest();
	return failedTests;
}

int	RobotomyRequestFormTestSuite(void) {
	int	failedTests = 0;

	failedTests += RobotomyRequestFormConstructorTest();
	failedTests += RobotomyRequestFormExecutedActionTest();
	return failedTests;
}

int	PresidentialPardonFormTestSuite(void) {
	int	failedTests = 0;

	failedTests += PresidentialPardonFormConstructorTest();
	failedTests += PresidentialPardonFormExecutedActionTest();
	return failedTests;
}
