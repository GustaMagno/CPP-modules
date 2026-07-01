#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal Default Constructor" << std::endl;
}

Animal::Animal(Animal &other)
{
	(void) other;
	std::cout << "Animal Assign Constructor" << std::endl;
}

Animal		&Animal::operator=(Animal &other)
{
	(void) other;
	std::cout << "Animal operator= Constructor" << std::endl;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "(...)" << std::endl;
}

std::string	Animal::getType() const {return this->type;}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
}