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
//					Zombie();
					Zombie(std::string name);
					~Zombie();
		void		announce(void);
		void		setName(std::string newName);
		std::string	getName(void) const;
	private:
		std::string	name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
#endif
