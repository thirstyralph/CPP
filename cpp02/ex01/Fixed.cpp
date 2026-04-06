#include "Fixed.hpp"

int	Fixed::getRawBits() const{ 
	return (this->Value);
};

void	Fixed::setRawBits(int Value) { 
	this->Value = Value;
};

//Default constructor
Fixed::Fixed(){
	this->Value = 0;
};

//Default destructor 
Fixed::~Fixed(){
};

//Copy constructor
Fixed::Fixed(const Fixed &oldFixed) {
	this->Value = oldFixed.getRawBits();
};

Fixed Fixed::operator=(const Fixed oldFixed) {
	if (this != &oldFixed) {
		this->Value = oldFixed.getRawBits();
	}
	return *this;
};

Fixed Fixed::operator>(const Fixed oldFixed) {
	int	
	if (this != &oldFixed) {
		if (this->Value >> 8 > oldFixed.getRawBits() >> 8)
		this->Value = oldFixed.getRawBits();
	}
	return *this;
};
