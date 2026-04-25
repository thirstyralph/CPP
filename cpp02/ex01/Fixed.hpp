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
							Fixed &operator=(const Fixed &rhs);
		//ValueGetter
		int					getRawBits(void) const;
		void				setRawBits(int Value);
		float				toFloat(void) const;
		int					toInt(void) const;
	private:
		int					rawBits;
		static const int	FractionalBits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
