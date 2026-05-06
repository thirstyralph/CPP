#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal {
	public:
			Dog();
			Dog(const Dog& old);
			~Dog();
	Dog&	operator=(const Dog& old);
	void	makeSound() const;
};

#endif
