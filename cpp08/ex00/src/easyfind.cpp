#include "easyfind.hpp"

template <typename T>
unsigned int easyfind(const T &cont, int n) {
	std::cout << "[DEBUG] easyfind has been tasked to find the value: " << n << std::endl;
	typename T::const_iterator it = cont.begin();
	for (unsigned int i = 0; i < cont.size(); ++i){
		if (*it == n)
			return i;
		std::cout << it[i] << "!=" << n << std::endl;
	}
	throw std::invalid_argument("argument not found");
}
