#include <fstream>
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>


class Contact{
	public:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
		void	GetName(){
			std::cout << this->FirstName;
			std::cout << this->LastName;
		}
};

class PhoneBook{
	public:
		int		top;
		int		last;
		Contact	arr[8];
		PhoneBook(){
			this->top = 0;
			this->last = 0;
		}
		void	search(std::string FirstName){
			for (int i = 0; i < top; ++i){
				if (arr[i].FirstName == FirstName)
					std::cout << "found ya\n";
			}
		
		}
		void	Add(){
			std::cout << "Adding Contact number " << this->last + 1 << "\n";
			std::cout << "Type in First Name: ";
			std::getline(std::cin, this->arr[last].FirstName);
			std::cout << "Type in Last Name: ";
			std::getline(std::cin, this->arr[last].LastName);
			std::cout << "Type in Phone number: ";
			std::getline(std::cin, this->arr[last].PhoneNumber);
			std::cout << "Type in their DARKEST SECRET: ";
			std::getline(std::cin, this->arr[last].DarkestSecret);
			if (this->top < 7)
				++this->top;
			if (this->last < this->top)
				++this->last;
			else
				this->last = 0;
		}
		void	Search(){
			std::string	target;
			int		i;

			i = 0;
			std::cout << "Write desired name: ";
			std::getline(std::cin, target);
			while (i <= this->top){
				if (this->arr[i].FirstName == target){
					std::cout << "found your name\n";
					return ;
				}
				++i;
			}
			std::cout << "contact not found >:(\n";
		}

};

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
		std::cout << "prompt: ";
		std::getline(std::cin, line);
		run = FunctionSelector(line, &db);
	}
	return (0);
}
