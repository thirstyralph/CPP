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
	std::cout << "==Creating Horde==" << std::endl;
	firstHorde = zombieHorde(3, "Mosqueperro");
	if (!firstHorde){
		delete Peter;
		return (1);
	}
	std::cout << "==Announcing Horde==" << std::endl;
	announceHorde(3, firstHorde);
	std::cout << "==Creating Horde==" << std::endl;
	secondHorde = zombieHorde(9, "Wallace");
	if (!secondHorde){
		deleteHorde(3, firstHorde);
		delete Peter;
		return (1);
	}
	std::cout << "==Announcing Horde==" << std::endl;
	announceHorde(9, secondHorde);
	deleteHorde(3, firstHorde);
	deleteHorde(9, secondHorde);
	delete Peter;
	return (0);
}
