#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class	AAnimal {
	protected:
		std::string	type;
	public:
					AAnimal();
					AAnimal(const std::string&	type);
					virtual ~AAnimal();
		AAnimal		&operator=(const AAnimal& old) ;
		/*---- setters ----*/
		void		setType(const std::string&	type);
		/*---- getters ----*/
		std::string	getType() const;
		virtual void		makeSound(void) const = 0;
};
#endif
