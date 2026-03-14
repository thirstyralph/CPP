#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanB {
	public:
					HumanB();
					HumanB(std::string name);
					HumanB(std::string name, Weapon& weapon);
		void		setWeapon(Weapon& weapon);
		void		attack(void);
	private:
		Weapon		*weapon;
		std::string	name;
};

#endif
