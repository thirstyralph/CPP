#include <iostream>
#include <string>

class	Fixed {
	public:
							Fixed();
							~Fixed();
							Fixed(const Fixed &oldFixed);
							Fixed& operator=(const Fixed& oldFixed);
		int					getRawBits() const;
		void				setRawBits(int Value);
	private:
		int					rawBits;
		static const int	FractionalBits = 8;
};
