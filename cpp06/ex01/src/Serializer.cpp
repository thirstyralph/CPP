#include "Serializer.hpp"

t_data::t_data(int sa, int fm, int rm, int t) {
	surfaceArea = sa;
	fuelMoisture = fm;
	relativeMoisture = rm;
	temperature = t;
}

uintptr_t	Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
