#include "Harl.hpp"

int main(void)
{
	Harl	harl;

	harl.complain("DEBUG");
	harl.complain("WARNING");
	harl.complain("INFO");
	harl.complain("ERROR");
	harl.complain("patrick bruel");
	harl.complain("");
	return 0;
}
