#include "Zombie.hpp"

int	main(void)
{
	Zombie	Stack("Vergamot");
	Zombie	*Peter;

	randomChump("Sam");
	randomChump("Ptolomeo");
	Peter = newZombie("Peter");
	Peter->announce();
	delete Peter;
	return (0);
}
