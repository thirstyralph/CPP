#include "easyfind.hpp"
#include <cstdlib>
#include <ctime>
#include <vector>



int main(void) {
	int	size = 100;
	std::vector<int>	v(size);


	srand(time(0));
	for (int i = 0; i < size; ++i) {
		v[i] = (rand() % 100);
	}
	try {
		std::cout << easyfind(v, rand() % size) << std::endl;
	}
	catch(const std::invalid_argument &e) {
	}
	return (0);
}
