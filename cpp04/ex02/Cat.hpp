#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public AAnimal {
	private:
		Brain	*noggin;
	public:
				Cat();
				~Cat();
	void	makeSound() const;
};

#endif
