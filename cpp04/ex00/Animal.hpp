#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class	Animal {
	protected:
		std::string	type;
	public:
					Animal();
					Animal(const Animal&	old);
					Animal(const std::string&	type);
					virtual ~Animal();
		Animal		&operator=(const Animal& old) ;
		/*---- setters ----*/
		void		setType(const std::string&	type);
		/*---- getters ----*/
		std::string	getType() const;
		virtual void		makeSound(void) const;
};
#endif
