#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->Ideas = new(Brain);
	std::cout << "Dog Default Constructor" << std::endl;
}

Dog::Dog(Dog &other) : Animal(other)
{
	this->Ideas = new Brain(*other.Ideas);;
	std::cout << "Dog Assign Constructor" << std::endl;
}

Dog		&Dog::operator=(const Dog &other)
{
	std::cout << "Dog operator= Constructor" << std::endl;
	if (&other == this)
	{
		return (*this);
	}
	delete(this->Ideas);
	this->Ideas = new Brain(*other.Ideas);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wolf Wolf!" << std::endl;
}

Dog::~Dog()
{
	delete(this->Ideas);
	std::cout << "Dog Destructor" << std::endl;
}