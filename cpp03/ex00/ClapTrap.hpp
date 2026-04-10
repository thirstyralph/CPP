#include <string>

class ClapTrap {
	private:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
	public:
		//default constructor
					ClapTrap();
		//copy constructor
					ClapTrap(ClapTrap& old);
		//Destructor
					~ClapTrap();
		//Copy assignment operator
		ClapTrap	&operator=(const ClapTrap &src);
		std::string	getName();
		int			getHitPoints();
		int			getEnergyPoints();
		int			getAttackDamage();
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};
