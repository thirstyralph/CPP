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
		void	setName(std::string name);
		void	announce(void);
	private:
		std::string	name;
};

void	deleteHorde(int N, Zombie *Horde);
void	announceHorde(int N, Zombie *Horde);
void	randomChump(std::string name);
Zombie*	newZombie(std::string name);
Zombie*	zombieHorde(int	N, std::string name);



#endif
