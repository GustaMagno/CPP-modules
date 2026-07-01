#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat Default Constructor" << std::endl;
}

Cat::Cat(Cat &other) : Animal(other)
{
	(void) other;
	std::cout << "Cat Assign Constructor" << std::endl;
}

Cat		&Cat::operator=(Cat &other)
{
	(void) other;
	std::cout << "Cat operator= Constructor" << std::endl;
	return (*this);
}


void	Cat::makeSound() const
{
	std::cout << "Miau, Miau!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
}