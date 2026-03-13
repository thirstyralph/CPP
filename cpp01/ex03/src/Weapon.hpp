#include <string>

class	Weapon {
	public:
		Weapon();
		std::string	getType();
		void		setType(std::string Type);
	private:
		std::string	type;
};
