#include "Zombie.hpp"

int	main(void)
{
	Zombie	Stack("Vergamot");
	Zombie	*Peter;
	Zombie	*firstHorde;
	Zombie	*secondHorde;

	randomChump("Sam");
	randomChump("Ptolomeo");
	Peter = newZombie("Peter");
	Peter->announce();
	firstHorde = zombieHorde(3, "Mosqueperro");
	if (!firstHorde){
		delete Peter;
		return (1);
	}
	announceHorde(3, firstHorde);
	secondHorde = zombieHorde(9, "Wallace");
	if (!secondHorde){
		deleteHorde(3, firstHorde);
		delete Peter;
		return (1);
	}
	announceHorde(9, secondHorde);
	deleteHorde(3, firstHorde);
	deleteHorde(9, secondHorde);
	delete Peter;
	return (0);
}
