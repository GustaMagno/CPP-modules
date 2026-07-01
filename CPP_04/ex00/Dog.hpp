#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
	
public:
	Dog();
	Dog(Dog &other);
	Dog		&operator=(Dog &other);
	void	makeSound() const;
	~Dog();
};

#endif