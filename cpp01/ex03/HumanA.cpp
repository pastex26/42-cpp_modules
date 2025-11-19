#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
	: name(name), weapon(weapon)
{
	std::cout << this->name << " created with a " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << this->name << " is being destroyed" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
