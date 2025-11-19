#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon& weapon)
	: name(name), weapon(&weapon)
{
	std::cout << this->name << " created with a " << this->weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name)
	: name(name), weapon(NULL)
{
	std::cout << this->name << " created with no weapon" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << this->name << " is being destroyed" << std::endl;
}

void	HumanB::attack(void)
{
	if (!this->weapon)
		std::cout << this->name << " has no weapon to attack with" << std::endl;		
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	this->weapon = &newWeapon;
	std::cout << this->name << " now has a " << this->weapon->getType() << std::endl;	
}