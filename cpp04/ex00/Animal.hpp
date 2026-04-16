#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class	Animal {
	public:
					Animal();
					Animal(const std::string	type);
					~Animal();
		Animal		&operator=(const Animal& old);
		/*---- setters ----*/
		void		setType(const std::string	name);
		/*---- getters ----*/
		std::string	getType();
	private:
		std::string	type;
};
#endif
