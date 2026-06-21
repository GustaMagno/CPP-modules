#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("None"), hitpoints(10), energypoints(10), attackdmg(10)
{
	std::cout << "Default ClapTrap Constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name): name(name), hitpoints(10), energypoints(10), attackdmg(10)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy ClapTrap Constructor called" << std::endl;
	this->attackdmg = other.attackdmg;
	this->name = other.name;
	this->energypoints = other.energypoints;
	this->hitpoints = other.hitpoints;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap Constructor operator= called" << std::endl;
	this->attackdmg = other.attackdmg;
	this->name = other.name;
	this->energypoints = other.energypoints;
	this->hitpoints = other.hitpoints;
	return (*this);
}

ClapTrap::~ClapTrap(){std::cout << "ClapTrap Destructor called" << std::endl;}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energypoints > 0)
	{
		this->hitpoints += amount;
		std::cout << this->name << " be Repaired: " << amount  << ". " << this->hitpoints << " Points of hp!" << std::endl;
		this->energypoints--;
	}
	else
		std::cout << this->name << " Dont have energy " << std::endl;
}
void	ClapTrap::attack(const std::string &target)
{
	if (this->energypoints > 0)
	{
		this->energypoints--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackdmg << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " Dont have energy " << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hitpoints -= amount;
	std::cout << this->name << " take " << amount << " Damage.  " << this->hitpoints << " points of hp!" << std::endl;
}
