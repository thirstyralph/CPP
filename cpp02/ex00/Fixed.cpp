#include "Fixed.hpp"

int	Fixed::getRawBits() const{ 
	std::cout << "getRawBits member function called" << std::endl;
	return (this->Value);
};

void	Fixed::setRawBits(int Value) { 
	std::cout << "setRawBits member function called" << std::endl;
	this->Value = Value;
};

//Default constructor
Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->Value = 0;
};

//Default destructor 
Fixed::~Fixed(){
	std::cout << "Default destructor called" << std::endl;
};

//Copy constructor
Fixed::Fixed(const Fixed &oldFixed) {
	std::cout << "Copy constructor called" << std::endl;
	this->Value = oldFixed.Value;
};

Fixed& Fixed::operator=(const Fixed& oldFixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &oldFixed) {
		this->Value = oldFixed.getRawBits();
	}
	return *this;
};
