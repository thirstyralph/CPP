#include "ScavTrap.hpp"

int	 main(void) {
	//ex00
	ClapTrap a;
	a.attack("somebody that I used to know");
	a.takeDamage(1);
	a.takeDamage(100);
	a.takeDamage(1);
	//ex01
	ScavTrap b;
	b.attack("somebody that I used to know");
	b.takeDamage(1);
	b.takeDamage(100);
	b.takeDamage(1);
	return (0);
}
