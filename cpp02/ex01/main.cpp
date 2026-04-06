#include "Fixed.hpp"

int main( void ) {
	Fixed a(1);

	//a.setRawBits(255);
	std::cout << a.getRawBits() << std::endl;
	std::cout << a.toFloat() << std::endl;
	return 0;
}
