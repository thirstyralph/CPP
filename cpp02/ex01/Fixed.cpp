#include "Fixed.hpp"

int	Fixed::getRawBits() const{ 
	std::cout << "getRawBits called" << std::endl;
	return (this->rawBits);
};

void	Fixed::setRawBits(int rawBits) { 
	std::cout << "setRawBits called" << std::endl;
	this->rawBits = rawBits /*<< this->FractionalBits*/;
};

//Default constructor
Fixed::Fixed(){
	std::cout << "default constructor called" << std::endl;
	this->rawBits = 0; };

//Default destructor 
Fixed::~Fixed(){
	std::cout << "default destructor called" << std::endl;
}

//Copy constructor
Fixed::Fixed(const Fixed &oldFixed) {
	std::cout << "copy constructor called" << std::endl;
	this->rawBits = oldFixed.getRawBits();
}

//const integer constructor
Fixed::Fixed(const int value) {
	std::cout << "int constructor called" << std::endl;
	this->rawBits = value << this->FractionalBits;
}

//const float constructor
Fixed::Fixed(const float value) {
	std::cout << "float constructor called" << std::endl;
	this-> rawBits = roundf(value * (1 << this->FractionalBits));

}

//toInt
int	Fixed::toInt() const{
	std::cout << "toInt called" << std::endl;
	return (this->rawBits >> this->FractionalBits);
}

//toFloat
float	Fixed::toFloat() const{
	std::cout << "toFloat called" << std::endl;
	return ((float)this->rawBits / (1  << this->FractionalBits));
}

//Operator overloads
std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	return (out << fixed.toFloat());
}
