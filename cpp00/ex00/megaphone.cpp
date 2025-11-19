#include <iostream>
#include <cctype>

#define NO_ARG_QUOTE "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << NO_ARG_QUOTE;
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string	tmp = argv[i];
			for (size_t j = 0; j < tmp.length(); j++)
			{
				std::cout << (char)toupper(tmp[j]);
			}
		}
	}
	std::cout << std::endl;
	return (0);
}
