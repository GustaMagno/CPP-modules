#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog Default Constructor" << std::endl;
}

Dog::Dog(Dog &other) : Animal(other)
{
	(void) other;
	std::cout << "Dog Assign Constructor" << std::endl;
}

Dog		&Dog::operator=(Dog &other)
{
	(void) other;
	std::cout << "Dog operator= Constructor" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wolf Wolf!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
}