#include "HumanB.hpp"

void	HumanB::attack()
{
	if (this->HumanWeapon)
		std::cout << this->HumanName + " attacks with their " + this->HumanWeapon->getType() << std::endl;
	else
		std::cout << this->HumanName + " attacks with none" << std::endl;
}

void	HumanB::setWeapon(Weapon& type)
{
	this->HumanWeapon = &type;
}

HumanB::HumanB(std::string name)
{
	this->HumanName = name;
	this->HumanWeapon = NULL;
}