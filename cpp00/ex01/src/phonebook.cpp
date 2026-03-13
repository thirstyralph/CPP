#include "phonebook.hpp"

void	PrintColumn(std::string s){
	int			len;
	std::string	out;

	len = s.size();
	if (len > 10)
		s.erase(9);
	std::cout << s;
	if (len < 10){
		while (len < 10){
			std::cout << " ";
			++len;
		}
	}
	else if (len > 10) {
		std::cout << ".";
	}
	std::cout << "|";
}

void	PrintIndex(){
	PrintColumn("index");
	PrintColumn("first name");
	PrintColumn("last name");
	PrintColumn("NickName");
	PrintColumn("Phone Number");
	PrintColumn("Darkest Secret");
	std::cout << "\n";
}

/*
	Methods for Contact Class
	*/
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
	return (-1);
}

void Contact::Init() {
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

void	Contact::display_contact(){
	PrintColumn(this->FirstName);
	PrintColumn(this->LastName);
	PrintColumn(this->NickName);
	PrintColumn(this->PhoneNumber);
	PrintColumn(this->DarkestSecret);
	std::cout << "\n";
}

std::string	Contact::GetName(){
		return (this->FirstName);
}

/* 
	methods for PhoneBook Class
	*/
PhoneBook::PhoneBook(){
	this->top = 0;
	this->last = 0;
}

void	PhoneBook::Add(){
	std::cout << "Adding Contact number " << this->last + 1 << "\n";
	if (top < 7)
		arr[top].Init();
	else
		arr[last].Init();
	if (this->top < 7)
		++this->top;
	if (this->last < this->top)
		++this->last;
	else
	this->last = 0;
}

void	PhoneBook::Search(){
	int					i;
	std::string			target;


	i = 0;
	std::cout << "Write desired name: ";
	std::getline(std::cin, target);
	PrintIndex();
	while (i <= this->top){
		if (this->arr[i].GetName() == target){
			std::cout << i << "         |";
			this->arr[i].display_contact();
		}
		++i;
	}
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
