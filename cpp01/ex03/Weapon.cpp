# include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type){}

Weapon::~Weapon(void)
{
	std::cout << type << " is being destroyed" << std::endl;
}

void	Weapon::setType(std::string type)
{
	std::cout << this->type;
	this->type = type;
	std::cout << " is now a " << this->type << std::endl;
}

const std::string&	Weapon::getType(void) const
{
	return this->type;
}