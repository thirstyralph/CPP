#include "Zombie.hpp"

void	deleteHorde(int N, Zombie *Horde){
	(void)N;
	delete [] Horde;
}

void	announceHorde(int N, Zombie *Horde){
	int	i = 0;

	while (i < N){
		Horde[i].announce();
		++i;
	}
}

Zombie	*zombieHorde(int N, std::string name){
	int		i = 0;
	Zombie	*Horde;

	(void)name;
	Horde = new Zombie[N];
	if (!Horde)
		return (NULL);
	while (i < N)
	{
		Horde[i].setName(name);
		++i;
	}
	return (Horde);
}
