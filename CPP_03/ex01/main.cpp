#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap player("Alanzoka");
	ScavTrap player2(player);
	ScavTrap player3;

	player3 = player;
	player.takeDamage(5);
	player.attack("Monster");
	player.beRepaired(5);
	player.guardGate();
	/*std::cout << " TEST ENERGY SCAVTRAP:  " << std::endl;
	for (int i = 0; i < 50; i++)
	{
		player.attack("Monster");
	}*/
}