#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public AAnimal {
	private:
		Brain	*noggin;
	public:
				Dog();
				~Dog();
	void	makeSound() const;
};

#endif
