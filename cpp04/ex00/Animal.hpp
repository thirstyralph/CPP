#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class	Animal {
	public:
					Animal();
					Animal(const std::string	type);
					~Animal();
		Animal		&operator=(const Animal& old);
		/*---- setters ----*/
		void		setName(const std::string	name);
		/*---- getters ----*/
		std::string	getName();
	private:
		std::string	type;
};
#endif
