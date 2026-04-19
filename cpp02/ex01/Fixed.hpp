#include <iostream>
/*
#include <string>
#include <cmath>
*/

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
		//equal sign overload
		Fixed &operator=(const Fixed &rhs);
		//ValueGetter
		int					getRawBits() const;
		void				setRawBits(int Value);
		float				toFloat() const;
		int					toInt() const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
