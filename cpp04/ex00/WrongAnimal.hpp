#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class	WrongAnimal {
	protected:
		std::string	type;
	public:
					WrongAnimal();
					WrongAnimal(const std::string&	type);
					~WrongAnimal();
		WrongAnimal		&operator=(const WrongAnimal& old) ;
		/*---- setters ----*/
		void		setType(const std::string&	type);
		/*---- getters ----*/
		std::string	getType() const;
		void		makeSound(void);
};
#endif
