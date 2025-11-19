#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
public:
	Harl();
	~Harl();
	void	complain(std::string level);
private:
	void	debug(void){std::cout << "[ DEBUG ]" << std::endl;};
	void	info(void){std::cout << "[ INFO ]" << std::endl;};
	void	warning(void){std::cout << "[ WARNING ]" << std::endl;};
	void	error(void){std::cout << "[ ERROR ]" << std::endl;};
};

#endif