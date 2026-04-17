#include "Zombie.hpp"

int	main(void)
{
	Zombie	Stack("Vergamot");
	Zombie	*Peter;

	randomChump("Sam");
	randomChump("Ptolomeo");
	Peter = newZombie("Peter");
	Peter->announce();
	std::cout << Peter->getName() << " has been renamed to ";
	Peter->setName("Robert");
	std::cout << Peter->getName() << std::endl;
	delete Peter;
	return (0);
}
