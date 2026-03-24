#include "sedim.hpp"

std::string	replaceAll(	std::string const& text,
						std::string const& s1,
						std::string const& s2)
{
	std::string	res;
	std::string::size_type	pos = 0;
	std::string::size_type	hit;

	while (
}


{
	if (argc != 4)
		return (2);
	std::string	filename(argv[1]);
	std::string	needle(argv[2]);
	std::string	replacement(argv[3]);
	std::ifstream	inputFile(argv[1]);
	std::string		line;

	while(std::getline(inputFile, line)) {
		std::cout << line << std::endl;
	}
	std::cout << filename << std::endl;
	std::cout << needle << std::endl;
	std::cout << replacement << std::endl;
	return (0);
}
