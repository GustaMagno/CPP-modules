#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie::Zombie()
{
	this->name = "None";
}

Zombie::~Zombie()
{
	std::cout << this->name + ": Is out." << std::endl;
}

