#include "Zombie.hpp"

void	randomChump(std::string name){
	Zombie	zombie(name);

	zombie.announce();
}

void Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

