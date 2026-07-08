#include "tools.hpp"
#include <iostream>

int	main(void) {
	int	a = 2;
	int	b = 3;

	std::cout << "a = " << a << " b = " << b << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << " b = " << b << std::endl;

	std::string c = "macaco";
	std::string d = "helefante";
	std::cout << "c = " << c << " d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << " d = " << d << std::endl;

	return (0);
}

