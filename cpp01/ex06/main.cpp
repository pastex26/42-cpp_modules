#include "Harl.hpp"


int main(int argc, const char *argv[])
{
	Harl	harl;

	if (argc != 2)
	{
		std::cerr << "usage: <filter>" << std::endl;
		return 1;
	}
	std::string filter = argv[1];
	complainIndex(harl, filter);
	return 0;
}
