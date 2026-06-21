#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	this->energypoints = 50;
	this->name = name;
	std::cout << "DiamondTrap Default Constructor" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->energypoints = 50;
	this->name = name;
	std::cout << "DiamondTrap name Constructor" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	ClapTrap::name = other.name + "_clap_name";
	this->name = other.name;
	std::cout << "DiamondTrap assign Constructor" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other)
{
	ClapTrap::operator=(other);
	ClapTrap::name = other.name + "_clap_name";
	this->name = other.name;
	std::cout << "DiamondTrap operator= called" << std::endl;
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->name << " and my ClapName is " << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor" << std::endl;
}