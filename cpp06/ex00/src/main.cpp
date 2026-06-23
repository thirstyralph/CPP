#include "ScalarConverter.hpp"


int	main(int argc, char **argv) {
	if (argc < 2)
		return (1);
	for (int i = 1; i < argc; ++i) {
		std::cout << "==== Literal: " << argv[i] << " ====" << std::endl;
		std::string	literal = argv[i];
		ScalarConverter::convert(literal);
		std::cout << std::endl;

	}
	return (0);
}
