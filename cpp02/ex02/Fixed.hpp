#include <iostream>
/*
#include <string>
#include <cmath>
*/

class	Fixed {

	public:
		//Default constructor
							Fixed();
							Fixed(const int value);
							Fixed(const float value);
		//Copy constructor
							Fixed(const Fixed &oldFixed);
		//Destructor
							~Fixed();
		//equal sign overload
		Fixed				&operator=(const Fixed &rhs);
		//ValueGetter
		int					getRawBits(void) const;
		void				setRawBits(int Value);
		float				toFloat(void) const;
		int					toInt(void) const;
		//comparison operator
		bool				operator>(const Fixed& other) const;
		bool				operator<(const Fixed& other) const;
		bool				operator>=(const Fixed& other) const;
		bool				operator<=(const Fixed& other) const;
		bool				operator==(const Fixed& other) const;
		bool				operator!=(const Fixed& other) const;
		//Arithmetic operators
		Fixed				operator+(const Fixed& other) const;
		Fixed				operator-(const Fixed& other) const;
		Fixed				operator*(const Fixed& other) const;
		Fixed				operator/(const Fixed& other) const;
		//increment operators
		Fixed				&operator++();
		Fixed				operator++(int);
		Fixed				&operator--();
		Fixed				operator--(int);
		static const Fixed	&min(const Fixed& f1, const Fixed& f2);
		static Fixed		&min(Fixed& f1, Fixed& f2);
		static Fixed		&max(Fixed& f1, Fixed& f2);
		static const Fixed	&max(const Fixed& f1, const Fixed& f2);
	private:
		int					rawBits;
		static const int	FractionalBits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
