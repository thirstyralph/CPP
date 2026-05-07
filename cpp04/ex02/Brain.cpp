#include "Brain.hpp"

Brain::Brain() : ideas() {}

Brain::Brain(const Brain& old)  {
	if (this != &old) {
		for (int i = 0; i < 100; ++i) {
			this->ideas[i] = old.ideas[i];
		}
	}
}

Brain&	Brain::operator=(const Brain& old) {
	if (this != &old) {
		for (int i = 0; i < 100; ++i) {
			this->ideas[i] = old.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain() {
}

const std::string&	Brain::getThought(const unsigned int i) {
	return (this->ideas[i]);
}

void	Brain::setThought(const unsigned int i, const std::string &thought) {
	this->ideas[i] = thought;
}
