#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {
	private:
		Brain	*brain;
	public:
				Cat();
				Cat(const Cat& old);
				~Cat();
	Cat&		operator=(const Cat& old);
	void		makeSound() const;
};

#endif
