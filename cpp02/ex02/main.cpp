#include "Fixed.hpp"

int main( void ) {
	/*
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "a is " << a.toFloat() << " as Float" << std::endl;
	std::cout << "b is " << b.toFloat() << " as Float" << std::endl;
	std::cout << "c is " << c.toFloat() << " as Float" << std::endl;
	std::cout << "d is " << d.toFloat() << " as Float" << std::endl;
	std::cout << "=================================" << std::endl;
	std::cout << "now multiplication" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	Fixed res(a * b);
	std::cout << "a * b = " << res << std::endl;
	res = a / b;
	std::cout << "division" << std::endl;
	std::cout << "a / b = " << res << std::endl;
	std::cout << "increment" << std::endl;
	std::cout << "prefix" << std::endl;
	std::cout << "antes " << a << "despues" << ++a << std::endl;
	std::cout << "postfix" << std::endl;
	std::cout << a++ << "++ = " << a << std::endl;
	std::cout << "decrement" << std::endl;
	std::cout << "prefix" << std::endl;
	std::cout << "antes " << a << "despues" << --a << std::endl;
	std::cout << "postfix" << std::endl;
	std::cout << a-- << "-- = " << a << std::endl;
	*/
	Fixed		a;
	Fixed const	b (Fixed(5.0f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	return 0;
}
