#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->Ideas = new(Brain);
	std::cout << "Cat Default Constructor" << std::endl;
}

Cat::Cat(Cat &other) : Animal(other)
{
	this->Ideas = other.Ideas;
	std::cout << "Cat Assign Constructor" << std::endl;
}

Cat		&Cat::operator=(const Cat &other)
{
	std::cout << "Cat operator= Constructor" << std::endl;
	if (&other == this)
		return (*this);
	delete(this->Ideas);
	this->Ideas = new Brain(*other.Ideas);
	return (*this);
}


void	Cat::makeSound() const
{
	std::cout << "Miau, Miau!" << std::endl;
}

Cat::~Cat()
{
	delete(this->Ideas);
	std::cout << "Cat Destructor" << std::endl;
}