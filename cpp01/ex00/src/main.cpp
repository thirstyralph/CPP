#include "Zombie.hpp"

int	main(void)
{
	Zombie	Stack("Vergamot");
	Zombie	*Peter;

	std::cout << "== STACK ZOMBIES ==" << std::endl;
	randomChump("Sam");
	randomChump("Ptolomeo");
	std::cout << "== HEAP ZOMBIE ==" << std::endl;
	Peter = newZombie("Peter");
	Peter->announce();
	std::cout << Peter->getName() << " has been renamed to ";
	Peter->setName("Robert");
	std::cout << Peter->getName() << std::endl;
	delete Peter;
	return (0);
}
