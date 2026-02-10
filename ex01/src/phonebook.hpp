#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <algorithm>

void	PrintColumn(std::string s);
void	PrintIndex();

class Contact{
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
	public:
		void		Init();
		void		display_contact();
		std::string	GetName();
};

class PhoneBook{
	private:
		int		top;
		int		last;
		Contact	arr[8];
	public:
		PhoneBook();
		void	Add();
		void	Search();
};
