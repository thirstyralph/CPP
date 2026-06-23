#include "ScalarConverter.hpp"
#include <sstream>

void	displayChar(std::string literal) {
	std::stringstream	ss(literal);
	int					intNum;
	char				value;

	std::cout << "char: ";
	ss >> intNum;
	if (literal == "nan")
		std::cout << "impossible" << std::endl;
	else if ((intNum > 127) || (intNum < 31))
		std::cout << "Non displayable" << std::endl;
	else {
		value = intNum;
		std::cout << value << std::endl;
	}
}

void	displayInt(std::string literal) {
	std::stringstream	ss(literal);
	long long int		longNum;
	int					intNum;

	std::cout << "int: ";
	ss >> longNum;
	intNum = longNum;
	if ((longNum < INT_MIN) || (longNum > INT_MAX)) 
		std::cout << "overflow" << std::endl;
	else if (literal == "nan")
		std::cout << "impossible" << std::endl;
	else
		std::cout << intNum << std::endl;
}

void	displayDouble(std::string literal) {
	std::stringstream	ss(literal);
	long double			longNum;
	double				doubleNum;

	std::cout << "Double: ";
	ss >> longNum;
	doubleNum = longNum;
	if (literal == "nan")
		std::cout << "nan" << std::endl;
	else if ((longNum < -std::numeric_limits<double>::max()) || (longNum > std::numeric_limits<double>::max())) 
		std::cout << "overflow" << std::endl;
	else
		std::cout << doubleNum << std::endl;
}

void	displayFloat (std::string literal) {
	std::stringstream	ss(literal);
	long double			longNum;
	float				floatNum;

	std::cout << "float: ";
	ss >> longNum;
	floatNum = longNum;

	if (literal == "nan") {
		std::cout << "nanf" << std::endl;
	}
	else if ((longNum < -std::numeric_limits<float>::max()) || (longNum > std::numeric_limits<float>::max())) 
		std::cout << "overflow" << std::endl;
	else
		std::cout << floatNum << std::endl;
}

void	ScalarConverter::convert(std::string literal) {
	std::stringstream	ss(literal);
	float				floatNum;

	ss >> floatNum;
	displayChar(literal);
	displayInt(literal);
	displayFloat(literal);
	displayDouble(literal);
}
