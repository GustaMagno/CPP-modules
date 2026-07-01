#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* Ideas;
public:
	Dog();
	Dog(Dog &other);
	Dog		&operator=(const Dog &other);
	void	makeSound() const;
	~Dog();
};

#endif