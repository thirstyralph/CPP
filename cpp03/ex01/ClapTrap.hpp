#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap {
	private:
		std::string		name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;
	public:
		//default constructor
					ClapTrap();
		//copy constructor
					ClapTrap(ClapTrap& old);
		//Destructor
					~ClapTrap();
		//Copy assignment operator
		ClapTrap	&operator=(const ClapTrap &src);
		std::string	getName() const;
		/*------------------- getters --------------------------------------*/
		unsigned int			getHitPoints() const;
		unsigned int			getEnergyPoints() const ;
		unsigned int			getAttackDamage() const;
		/*------------------- setters --------------------------------------*/
		void			setHitPoints(const unsigned int hp);
		void			setEnergyPoints(const unsigned int ep);
		void			setAttackDamage(const unsigned int ad);
		void			definePoints(unsigned int hp, unsigned int ep,
							unsigned int ad);
		void			setName(const std::string newName);

		/*------------------- actions --------------------------------------*/
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);


};
#endif
