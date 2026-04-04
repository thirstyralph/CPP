#include "Harl.hpp"

int	main(void){
	Harl	harl;
	Harl	carl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	carl.complain("DEBUG");
	carl.complain("INFO");
	carl.complain("WARNING");
	carl.complain("ERROR");
	return (0);
}
