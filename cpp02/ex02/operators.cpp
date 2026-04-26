#include "Fixed.hpp"

//comparison (>, <, >=, <=, == and !=)
bool	Fixed::operator>(const Fixed& other) const{
	return (this->rawBits > other.rawBits);
}

bool	Fixed::operator<(const Fixed& other) const{
	return (this->rawBits < other.rawBits);
}

bool	Fixed::operator>=(const Fixed& other) const {
	return (this->rawBits >= other.rawBits);
}

bool	Fixed::operator<=(const Fixed& other) const{
	return (this->rawBits <= other.rawBits);
}

bool	Fixed::operator==(const Fixed& other) const{
	return (this->rawBits == other.rawBits);
}

bool	Fixed::operator!=(const Fixed& other) const{
	return (this->rawBits != other.rawBits);
}

// Arithmetic operators (+, -, * and /)
Fixed	Fixed::operator+(const Fixed& other) const{
	Fixed	res;

	res.setRawBits(this->getRawBits() + other.getRawBits());
	return res;
}

Fixed	Fixed::operator-(const Fixed& other) const{
	Fixed	res;

	res.setRawBits(this->getRawBits() - other.getRawBits());
	return res;
}

Fixed	Fixed::operator*(const Fixed& other) const{
	Fixed		res;
	long long	prod;

	prod = (long long)this->getRawBits() * (long long)other.getRawBits();
	res.setRawBits((int)prod >> this->FractionalBits);
	return res;
}

Fixed	Fixed::operator/(const Fixed& other) const{
	Fixed		res;

	long long num = (long long)this->getRawBits() << FractionalBits;
	res.setRawBits((int)(num/other.rawBits));
	return res;
}

//prefix
Fixed	&Fixed::operator++() {
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

//postfix
Fixed	Fixed::operator++(int) {
	Fixed	temp(*this);

	temp.setRawBits(this->getRawBits());
	this->setRawBits(this->getRawBits() + 1);
	return (temp);
}

//prefix
Fixed	&Fixed::operator--() {
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

//postfix
Fixed	Fixed::operator--(int) {
	Fixed	temp(*this);

	temp.setRawBits(this->getRawBits());
	this->setRawBits(this->getRawBits() - 1);
	return (temp);
}

const Fixed	&Fixed::min(const Fixed& f1, const Fixed& f2){
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed	&Fixed::min(Fixed& f1, Fixed& f2) {
	if (f1 < f2)
		return (f1);
	return (f2);
}

const Fixed	&Fixed::max(const Fixed& f1, const Fixed& f2){
	if (f1 > f2)
		return (f1);
	return (f2);
}

Fixed	&Fixed::max(Fixed& f1, Fixed& f2) {
	if (f1 > f2)
		return (f1);
	return (f2);
}
