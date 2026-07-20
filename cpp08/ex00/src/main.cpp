#include "easyfind.hpp"
#include <vector>

int main(void) {
	std::vector<int>	v;
	std::fill(v.begin(), v.end(), 8);
	std::cout << easyfind(v, 8);
	return (0);
}
