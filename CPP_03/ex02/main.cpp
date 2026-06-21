#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap player("Alanzoka");
	FragTrap player2(player);
	FragTrap player3;

	player3 = player;
	player.takeDamage(5);
	player.attack("Monster");
	player.beRepaired(5);
	player.highFivesGuys();
	// std::cout << " TEST ENERGY FragTrap:  " << std::endl;
	// for (int i = 0; i < 100; i++)
	// {
	// 	player.attack("Monster");
	// }
}