#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
public:
	Zombie(std::string nameArg);
	Zombie(void);
	~Zombie();
	void	announce(void);
	void	setName(std::string nameArg);
private:
	std::string name;
\
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif