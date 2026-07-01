#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << this->name + ": Is created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name + ": Is destroyed." << std::endl;
}

