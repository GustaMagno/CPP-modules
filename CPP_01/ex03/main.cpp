#include "Weapon.hpp"
#include "HumanA.hpp"

int main()
{
	Weapon club("crude spiked club");
	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();

	club.setType("HumanA weapon");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
}