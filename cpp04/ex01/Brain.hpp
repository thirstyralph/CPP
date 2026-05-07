#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>

class	Brain {
	private:
		std::string	ideas[100];
	public:
						Brain();
						Brain(const Brain& old);
						~Brain();
	Brain&				operator=(const Brain& old);
	const std::string&	getThought(const unsigned int i);
};
#endif
