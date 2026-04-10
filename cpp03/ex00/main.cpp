#include "ClapTrap.hpp"

int	 main(void) {
	ClapTrap a;
	ClapTrap b;

	a.attack("somebody that I used to know");
	std::cout << a.getName() << a.getAttackDamage() << a.getEnergyPoints() << a.getHitPoints() << std::endl;
	a.takeDamage(1);
	std::cout << a.getName() << a.getAttackDamage() << a.getEnergyPoints() << a.getHitPoints() << std::endl;
	a.takeDamage(100);
	std::cout << a.getName() << a.getAttackDamage() << a.getEnergyPoints() << a.getHitPoints() << std::endl;
	a.takeDamage(1);
	std::cout << a.getName() << a.getAttackDamage() << a.getEnergyPoints() << a.getHitPoints() << std::endl;
	return (0);
}
