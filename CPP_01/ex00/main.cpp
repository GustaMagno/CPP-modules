#include "Zombie.hpp"

void	randomChump( std::string name )
{
	Zombie	Zombie_temp(name);

	Zombie_temp.announce();
}


Zombie*	newZombie( std::string name )
{
	return (new Zombie(name));
}

int main()
{
	Zombie	*zombie1;

	zombie1 = newZombie("Gustavo");
	zombie1->announce();
	randomChump("ZOOOMBIE");
	delete(zombie1);
}