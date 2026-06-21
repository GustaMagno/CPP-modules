#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hitpoints = 100;
	this->attackdmg = 20;
	this->energypoints = 50;
	std::cout << "ScavTrap Default Constructor" << std::endl;
}

ScavTrap::~ScavTrap(){std::cout << "ScavTrap Destructor called" << std::endl;}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	this->hitpoints = 100;
	this->attackdmg = 20;
	this->energypoints = 50;
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	ClapTrap::operator=(other);
	std::cout << "ScavTrap operator= called" << std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->energypoints > 0)
	{
		this->energypoints--;
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackdmg << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " Dont have energy " << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

