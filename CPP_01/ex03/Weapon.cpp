#include "Weapon.hpp"

void	Weapon::setType(std::string value)
{
	this->type = value;
}

std::string&	Weapon::getType()
{
	return (this->type);
}

Weapon::Weapon()
{
	this->type = "None";
}

Weapon::Weapon(std::string value)
{
	this->type = value;
}