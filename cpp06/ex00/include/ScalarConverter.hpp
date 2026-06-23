#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
#include <string>
#include <climits>
#include <limits>
#include <sstream>
#include <iostream>

class ScalarConverter {
	private:
		ScalarConverter();
	public:
		static void convert(std::string	literal);
};

#endif
