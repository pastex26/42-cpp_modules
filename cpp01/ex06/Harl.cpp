#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl created" << std::endl;
}
Harl::~Harl()
{
	std::cout << "Harl destroyed" << std::endl;
}

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

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
}

static int	harlFilter(std::string& filter)
{
	if (filter == "DEBUG") return 0;
	else if (filter == "INFO") return 1;
	else if (filter == "WARNING") return 2;
	else if (filter == "ERROR") return 3;
	return -1;
}

void complainIndex(Harl& harl, std::string& filter)
{
	switch(harlFilter(filter))
	{
	case 0:
			harl.complain("DEBUG");
	case 1:
			harl.complain("INFO");
	case 2:
			harl.complain("WARNING");
	case 3:
		harl.complain("ERROR");
		break ;
	case -1:
		std::cerr << "bad filter" << std::endl;
	}
}
