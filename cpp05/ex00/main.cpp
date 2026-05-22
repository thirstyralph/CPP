#include "Bureaucrat.hpp"

int	bureaucratBasicTest(void) {

	for (unsigned int i = 0; i < 200; ++i) {
		{
		try {
			Bureaucrat	a(i);
			if ((a.getGrade() == i) && (i >= 1 ||  i <= 150))
				std::cout << "Bureaucrat created with rank " << i << std::endl;
			}
		catch (std::exception const& e){
				std::cout << "Bureaucrat NOT created with rank " << e.what() << std::endl;
		}
		}
	}
	return (1);
}

int	main(void) {
	int passedTests = 0;
	//int constructors
	passedTests += bureaucratBasicTest();
	//getName
	//getGrade
	//IncrementGrade
	//DecrementGrade
	//insertion overload
	return (0);
}
