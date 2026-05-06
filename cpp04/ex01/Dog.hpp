#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal {
	private:
		Brain	*noggin;
	public:
				Dog();
				~Dog();
	void	makeSound() const;
};

#endif
