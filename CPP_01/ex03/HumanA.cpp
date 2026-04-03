#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << this->HumanName + " attacks with their " + this->HumanWeapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weap) : HumanWeapon(weap) 
{
	this->HumanName = name;
}