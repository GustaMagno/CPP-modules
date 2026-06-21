#include "ClapTrap.hpp"

int main()
{
	ClapTrap player("Alanzoka");
	ClapTrap player2(player);
	ClapTrap player3;

	player3 = player;
	player.takeDamage(5);
	player.attack("Monster");
	player.beRepaired(5);
	player.beRepaired(5);
	player.beRepaired(5);
	player.beRepaired(5);
	player.beRepaired(5);
	player.beRepaired(5);
	player.attack("Monster");
	player.attack("Monster");
	player.attack("Monster");
	player.attack("Monster");
	player.beRepaired(5);

}