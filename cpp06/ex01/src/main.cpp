#include "Serializer.hpp"

void	dataPrinter(Data *src) {
	std::cout << "surface Area = " << src->surfaceArea << std::endl;
	std::cout << "fuel Moisture = " << src->fuelMoisture << std::endl;
		std::cout << "relative Moisture = " << src->relativeMoisture << std::endl;
	std::cout << "temperature = " << src->temperature << std::endl;
}

int	main(void) {
	Data *data = new Data(32, 32, 49, 540);


	uintptr_t	serializedData = Serializer::serialize(data);
	std::cout << "Data before serialization" << std::endl;
	dataPrinter(data);
	std::cout << "The data has been serialized" << std::endl;
	Data *newData = Serializer::deserialize(serializedData);
	std::cout << "The data has been deserialized" << std::endl;
	dataPrinter(newData);
	delete data;
	return (0);
}
