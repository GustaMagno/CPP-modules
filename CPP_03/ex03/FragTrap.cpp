#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->energypoints = 100;
	this->hitpoints = 100;
	this->attackdmg = 30;
	std::cout << "FragTrap Default Constructor" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	this->energypoints = 100;
	this->hitpoints = 100;
	this->attackdmg = 30;
	std::cout << "FragTrap name Constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap assign Constructor" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	ClapTrap::operator=(other);
	std::cout << "FragTrap operator= called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Default Destructor" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << " requests a highfive! ✋"  << std::endl;
}
