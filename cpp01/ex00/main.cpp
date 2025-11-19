#include "Zombie.hpp"

int main(void)
{
	Zombie *patrick = new Zombie("malloc zombie");
	
	if (!patrick)
		return 1;
	patrick->announce();
	delete patrick;
	Zombie bob = Zombie("heap zombie");
	bob.announce();
	randomChump("temporary zombie");
	return 0;
}
