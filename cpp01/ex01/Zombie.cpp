#include "Zombie.hpp"

Zombie::Zombie(std::string nameArg)
{
	if (nameArg.empty())
		name = "unnamed zombie";
	else
		name = nameArg;
	std::cout << name << " created" << std::endl;
}

Zombie::Zombie(void)
{
	name = "unnamed zombie";
	std::cout << name << " created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << name << " is being destroyed." << std::endl;
}

void	Zombie::setName(std::string nameArg)
{
	name = nameArg;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	randomChump(std::string name)
{
	Zombie temp(name);

	temp.announce();
}

Zombie* newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);

	if (!zombie)
	{
		std::cerr << "newZombie fail" << std::endl;
		return NULL;
	}
	return (zombie);
}
