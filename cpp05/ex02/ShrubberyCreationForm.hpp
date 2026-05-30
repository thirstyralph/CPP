#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include <fstream>
#include "AForm.hpp"

class	ShruberryCreationForm : public AForm {
	public:
				ShruberryCreationForm();	
				ShruberryCreationForm(
						const std::string &target
						);
				~ShruberryCreationForm();
		ShruberryCreationForm&	operator=(const ShruberryCreationForm &src);
		void	executedAction(void);
	private:
		const std::string	target;
};


# define ASCII_TREES \
	"               ,@@@@@@@,					" << std::endl <<		\
	"       ,,,.   ,@@@@@@/@@,  .oo8888o.		" << std::endl <<		\
	"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o		" << std::endl <<		\
	"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'		" << std::endl <<		\
	"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'		" << std::endl <<		\
	"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'		" << std::endl <<		\
	"   `&%\\ ` /%&'    |.|        \\ '|8'		" << std::endl <<		\
	"       |o|        | |         | |			" << std::endl <<		\
	"       |.|        | |         | |			" << std::endl <<		\
	"    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_	" << std::endl


#endif

