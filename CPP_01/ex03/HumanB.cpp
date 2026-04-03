#include "HumanB.hpp"

void	HumanB::attack()
{
	std::cout << this->HumanName + " attacks with their " + this->HumanWeapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& type)
{
	this->HumanWeapon = &type;
}

HumanB::HumanB(std::string name)
{
	this->HumanName = name;
}