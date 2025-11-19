#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void	Harl::complain(std::string level)
{
	typedef void (Harl::*HarlFunc)();

	const std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlFunc 			funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*funcs[i])();
			return ;
		}
	}
	std::cerr << "level not found: " << level << std::endl;
}
