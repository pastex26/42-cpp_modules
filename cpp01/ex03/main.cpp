#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
		Weapon	club = Weapon("golf club");
		Weapon	ball = Weapon("spike ball");

		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("sword");
		bob.attack();
	}
	std::cout << "--------------------------" << std::endl;
	{
		Weapon	club = Weapon("golf club");

		HumanB	bob("Bob");
		bob.attack();
		bob.setWeapon(club);
		bob.attack();
		club.setType("sword");
		bob.attack();
	}

	return 0;
}
