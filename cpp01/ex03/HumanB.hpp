#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
public:
	HumanB(std::string name, Weapon& weapon);
	HumanB(std::string name);
	~HumanB();
	void	attack(void);
	void	setWeapon(Weapon& newWeapon);

private:
	const std::string	name;
	Weapon*				weapon;
};

#endif