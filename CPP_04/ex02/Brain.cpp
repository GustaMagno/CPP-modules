#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = "Hello";
	}
}

Brain::Brain(Brain &other)
{
	std::cout << "Brain Assign Constructor" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
}

Brain		&Brain::operator=(Brain &other)
{
	std::cout << "Brain operator= Constructor" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}