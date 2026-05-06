#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {
	private:
		Brain	*noggin;
	public:
				Cat();
				~Cat();
	void	makeSound() const;
};

#endif
