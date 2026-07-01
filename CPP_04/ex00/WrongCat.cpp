#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat Default Constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat &other) : WrongAnimal(other)
{
	(void) other;
	std::cout << "WrongCat Assign Constructor" << std::endl;
}

WrongCat		&WrongCat::operator=(WrongCat &other)
{
	(void) other;
	std::cout << "WrongCat operator= Constructor" << std::endl;
	return (*this);
}


void	WrongCat::makeSound() const
{
	std::cout << "Wrong Miau, Miau!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor" << std::endl;
}