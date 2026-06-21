#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap player("Alanzoka");
	DiamondTrap player2(player);
	DiamondTrap player3;

	player3 = player;
	std::cout << "-----After Constructors-----\n\n\n\n\n\n\n" << std::endl;
	player.takeDamage(5);
	player.attack("Monster");
	player.beRepaired(5);
	player.whoAmI();
	// std::cout << " TEST ENERGY FragTrap:  " << std::endl;
	// for (int i = 0; i < 50; i++)
	// {
	// 	player.attack("Monster");
	// }
	std::cout << "\n\n\n\n\n\n\n-----Destructors-----" << std::endl;
}