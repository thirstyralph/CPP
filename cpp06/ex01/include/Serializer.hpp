#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <stdint.h>
#include <cassert>
#include <string>
#include <climits>
#include <limits>
#include <sstream>
#include <iostream>

struct t_data{
	t_data(int sa, int fm, int rm, int t);
	int	surfaceArea;
	int	fuelMoisture;
	int	relativeMoisture;
	int	temperature;
} typedef Data;

class Serializer {
	private:
		Serializer();
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
