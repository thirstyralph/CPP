#include "BureaucratTests.hpp"
#include "specificFormsTests.hpp"

int	main(void) {
	int	failedTests = 0;
	/* Bureaucrat */
	//int constructors
	failedTests += bureaucratBasicTest();
	//getName
	failedTests += bureaucratGetNameTest();
	//IncrementGrade
	failedTests += IncrementGradeTest();
	//DecrementGrade
	failedTests += DecrementGradeTest();
	//insertion overload
	failedTests += insertionOverloadTest();
	/* specific forms */
	failedTests += ShrubberyCreationFormTestSuite();
	failedTests += RobotomyRequestFormTestSuite();
	failedTests += PresidentialPardonFormTestSuite();
	std::cout << failedTests << " Tests failed" << std::endl;
	return (0);
}
