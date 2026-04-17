#include <iostream>
#include <string>


int	main(void)
{
	std::string		Brain = "HI THIS IS BRAIN";
	std::string		*stringPTR = &Brain;
	std::string&	stringREF = Brain;

	//Address of the string variable
	std::cout << &Brain << std::endl;
	// Address held by stringPTR
	std::cout << stringPTR << std::endl;
	// Address held by stringREF
	std::cout << &stringREF << std::endl;

	// Value of the string variable
	std::cout << Brain << std::endl;
	// Value pointed to by stringPTR
	std::cout << *stringPTR << std::endl;
	// Value pointed to by stringREF
	std::cout << stringREF << std::endl;

    //Change to reference
    *stringPTR = "PATATA";

    // Value of the string variable
	std::cout << Brain << std::endl;
	// Value pointed to by stringPTR
	std::cout << *stringPTR << std::endl;
	// Value pointed to by stringREF
	std::cout << stringREF << std::endl;
	return (0);
}
