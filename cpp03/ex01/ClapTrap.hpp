#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap {
	private:
		std::string				name;
		unsigned int			hitPoints;
		unsigned int			energyPoints;
		unsigned int			attackDamage;
	public:
		//default constructor
								ClapTrap(std::string name);
		//copy constructor
								ClapTrap(ClapTrap& old);
		//Destructor
								~ClapTrap();
		//Copy assignment operator
		ClapTrap				&operator=(const ClapTrap &src);
		std::string				getName() const;
		/*------------- Setters ---------------------------------*/
		void					setHitPoints(const unsigned int value);
		void					setEnergyPoints(const unsigned int value);
		void					setAttackDamage(const unsigned int value);
		/*------------- Getters ---------------------------------*/
		unsigned int			getHitPoints() const;
		unsigned int			getEnergyPoints() const ;
		unsigned int			getAttackDamage() const;
		/*------------- Actions ---------------------------------*/
		void					attack(const std::string& target);
		void					takeDamage(unsigned int amount);
		void					beRepaired(unsigned int amount);
		void					guardGate(void);
};
#endif
