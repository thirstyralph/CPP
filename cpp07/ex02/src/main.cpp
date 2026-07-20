#include "Array.hpp"
#include <iostream>
#include <stdexcept>

int	testAccess() {
	unsigned int len = 6;
	Array <int> a(len);

	try {
		std::cout << a[2] << std::endl;
	}
	catch (std::out_of_range const&) {
		std::cout << "access failed" << std::endl;
	}
	try {
		std::cout << a[8] << std::endl;
	}
	catch (std::out_of_range const& e) {
		std::cout << "access failed because " << e.what() << std::endl;
	}
	for (unsigned int i = 0; i < 3; ++i) {
		a[i] = i;
	}
	for (unsigned int i = 0; i < 3; ++i) {
		std::cout << a[i] << std::endl;
	}
	Array<int> b(a);
	for (unsigned int i = 0; i < 3; ++i) {
		std::cout << b[i] << std::endl;
	}
	return (0);
}


int	main(void) {
	int * a = new int();

	std::cout << a << std::endl;
	(void)testAccess();
	return (0);
}
