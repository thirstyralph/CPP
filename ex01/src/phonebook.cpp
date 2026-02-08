#include "phonebook.hpp"

int	FunctionSelector(std::string command, PhoneBook *db){
	if (command =="EXIT")
		return (0);
	else if (command == "SEARCH"){
		db->Search();
		return (1);
	}
	else if (command == "ADD"){
		db->Add();
		return (2);
	}
	std::cout << "Unrecognised command\n";
	return (-1);
}

int	main(void)
{
	int				run = 1;
	std::string		line;
	PhoneBook		db;
	

	while (run)
	{
		std::cout << "Prompt: ";
		std::getline(std::cin, line);
		run = FunctionSelector(line, &db);
	}
	return (0);
}
