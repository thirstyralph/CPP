#include "Fixed.hpp"

int	Fixed::getRawBits() const{ 
	return (this->rawBits);
};

void	Fixed::setRawBits(int rawBits) { 
	this->rawBits = rawBits << this->FractionalBits;
};

//Default constructor
Fixed::Fixed(){
	this->rawBits = 0; };

//Default destructor 
Fixed::~Fixed(){
}

//Copy constructor
Fixed::Fixed(const Fixed &oldFixed) {
	this->rawBits = oldFixed.getRawBits();
}

//const integer constructor
Fixed::Fixed(const int value) {
	this->rawBits = value << this->FractionalBits;
}

//const float constructor
Fixed::Fixed(const float value) {
	this-> rawBits = roundf(value * (1 << this->FractionalBits));

}
