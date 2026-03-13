#include "Zombie.hpp"

/*
	newZombie
	Declares a new zombie, allocates memory to it and
	returns a pointer to its position.
	take:
		std::string name: string containing the name of the
		zombie.
	returns:
		On success:	Pointer to the address of the zombie.
		On error:	NULL.
	*/
Zombie *newZombie(std::string name){
	Zombie *ret;

	ret = new Zombie(name);
	if (!ret)
		return (NULL);
	return (ret);
}


