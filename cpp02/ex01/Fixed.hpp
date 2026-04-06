#include <iostream>
#include <string>
#include <cmath>

class	Fixed {
	//OCF
	private:
		int					rawBits;
		static const int	FractionalBits = 8;
	public:
		//Default constructor
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		//Copy constructor
		Fixed(const Fixed &oldFixed);
		//Destructor
		~Fixed();
		//Copy assigment operator
		Fixed operator=(const Fixed oldFixed);
		//comparison operators
		bool operator>(const Fixed oldfixed);
		bool operator<(const Fixed oldfixed);
		bool operator>=(const Fixed oldfixed);
		bool operator<=(const Fixed oldfixed);
		bool operator==(const Fixed oldfixed);
		bool operator!=(const Fixed oldfixed);
		//arithmetic operators
		Fixed operator*(const Fixed oldfixed);
		Fixed operator+(const Fixed oldfixed);
		Fixed operator-(const Fixed oldfixed);
		Fixed operator/(const Fixed oldfixed);
		//ValueGetter
		int					getRawBits() const;
		//int					getFractionalPart() const;
		float				toFloat() const;
		void				setRawBits(int Value);
};
