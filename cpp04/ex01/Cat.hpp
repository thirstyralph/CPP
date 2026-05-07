#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {
	public:
			Cat();
			Cat(const Cat& old);
			~Cat();
	Cat&	operator=(const Cat& old);
	void	makeSound() const;
};

#endif
