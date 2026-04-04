#include <iostream>
#include <string>

class	Fixed {
	//OCF
	private:
		int					Value;
		static const int	FractionalBits = 8;
	public:
		//Default constructor
		Fixed();
		//Copy constructor
		Fixed(const Fixed &oldFixed);
		//Destructor
		~Fixed();
		//Copy assigment operator
		//by reference
		//Fixed& operator=(const Fixed& oldFixed);
		//By value
		Fixed operator=(const Fixed oldFixed);
		fixed operator>(const fixed oldfixed);
		fixed operator<(const fixed oldfixed);
		fixed operator>=(const fixed oldfixed);
		fixed operator<=(const fixed oldfixed);
		fixed operator==(const fixed oldfixed);
		fixed operator!=(const fixed oldfixed);
		fixed operator*(const fixed oldfixed);
		fixed operator+(const fixed oldfixed);
		fixed operator-(const fixed oldfixed);
		fixed operator/(const fixed oldfixed);
		//ValueGetter
		int					getRawBits() const;
		void				setRawBits(int Value);
};
