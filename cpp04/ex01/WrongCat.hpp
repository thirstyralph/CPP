#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal {
	private:
	Brain		*brain;	
	public:
				WrongCat();
				WrongCat(const WrongCat& old);
				~WrongCat();
	WrongCat&	operator=(const WrongCat& old);
	void		makeSound();
};

#endif
