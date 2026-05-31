#include "specificFormsTests.hpp"

int	ShrubberyCreationFormConstructorTest(void) {
	ShrubberyCreationForm	a("raymond");
	ShrubberyCreationForm	&b = a;
	ShrubberyCreationForm	c(b);
	if (c.getTarget() != a.getTarget())
		return 1;
	return (0);
}

int	ShrubberyCreationFormTestSuite(void) {
	int	failedTests = 0;

	failedTests += ShrubberyCreationFormConstructorTest();
	return failedTests;
}
