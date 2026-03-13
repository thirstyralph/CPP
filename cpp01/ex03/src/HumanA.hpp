#include <string>
#include "Weapon.hpp"

class	HumanA {
	public:
		HumanA(std::string weapon);
	private:
		Weapon		weapon;
		std::string	name;
};
