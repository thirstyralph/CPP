#include <iostream>
#include <cstring>
#include <algorithm>

int	main(int argc, char **argv)
{
	int	len;

	if (argc <= 1) {
		(void)argv;
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int argv_idx = 1; argv_idx < argc; ++argv_idx) {
		len = std::strlen(argv[argv_idx]);
		for (int str_idx = 0; str_idx < len; ++str_idx) {
			argv[argv_idx][str_idx] = std::toupper(argv[argv_idx][str_idx]);
		}
		std::cout << argv[argv_idx];
		if (argv_idx < argc - 1)
			std::cout << " ";
		else
			std::cout << "\n";
	}
	return (0);
}
