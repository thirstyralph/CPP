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
			Cat(const Cat& old);
			~Cat();
	Cat&	operator=(const Cat& old);
	void	makeSound() const;
};

#endif
