#include "Fixed.hpp"

int	Fixed::getRawBits() const{ 
	std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits);
};

void	Fixed::setRawBits(int rawBits) { 
	std::cout << "setRawBits member function called" << std::endl;
	this->rawBits = rawBits;
};

//Default constructor
Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->rawBits = 0;
};

//Default destructor 
Fixed::~Fixed(){
	std::cout << "Default destructor called" << std::endl;
};

//Copy constructor
Fixed::Fixed(const Fixed &oldFixed) {
	std::cout << "Copy constructor called" << std::endl;
	this->rawBits = oldFixed.rawBits;
};

Fixed& Fixed::operator=(const Fixed& oldFixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &oldFixed) {
		this->rawBits = oldFixed.getRawBits();
	}
	return *this;
};
