#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal Default Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &other)
{
	(void) other;
	std::cout << "WrongAnimal Assign Constructor" << std::endl;
}

WrongAnimal		&WrongAnimal::operator=(WrongAnimal &other)
{
	(void) other;
	std::cout << "WrongAnimal operator= Constructor" << std::endl;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong (...)" << std::endl;
}

std::string	WrongAnimal::getType() const {return this->type;}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor" << std::endl;
}