#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

/*
	Orthodox Canonical form:
		- Default constructor
		- Copy constructor
		- Destructor
		- Assignment operator
*/
class	Zombie {
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
	private:
		std::string	name;
};

#endif
