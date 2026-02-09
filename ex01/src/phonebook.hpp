#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <algorithm>

/*
	display
	displays the saved contact as a list of 4 columns, padded to 10 characters
*/
void	PrintColumn(std::string s){
	int		len;
	std::string	out;

	len = s.size();
	if (len > 10)
		s.erase(9);
	std::cout << s;
	if (len < 10){
		while (len < 9){
			std::cout << " ";
			++len;
		}
	}
	else {
		std::cout << ".";
	}
	std::cout << "|";
}

class Contact{
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
	public:
		void	Init(){
			std::cout << "Type in First Name: ";
			std::getline(std::cin, this->FirstName);
			std::cout << "Type in Last Name: ";
			std::getline(std::cin, this->LastName);
			std::cout << "Type in NickName: ";
			std::getline(std::cin, this->NickName);
			std::cout << "Type in Phone number: ";
			std::getline(std::cin, this->PhoneNumber);
			std::cout << "Type in their DARKEST SECRET: ";
			std::getline(std::cin, this->DarkestSecret);
			}

		std::string	GetName(){
			return (this->FirstName);
		}

		void	display_contact()
		{
			PrintColumn(this->FirstName);
			PrintColumn(this->LastName);
			PrintColumn(this->NickName);
			PrintColumn(this->PhoneNumber);
			PrintColumn(this->DarkestSecret);
			std::cout << "\n";
		}
};

/*
	no entiendo esto, no se que deberia de ser publico y que deberia de ser privado
*/
class PhoneBook{
	public:
		int		top;
		int		last;
		Contact	arr[8];
		PhoneBook(){
			this->top = 0;
			this->last = 0;
		}
		void	Add(){
			std::cout << "Adding Contact number " << this->last + 1 << "\n";
			arr[top].Init();
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
				if (this->arr[i].GetName() == target){
					this->arr[i].display_contact();
				}
				++i;
			}
		}
};
