#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <math.h>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(Animal &other);
	Animal			&operator=(Animal &other);
	std::string		getType() const;
	virtual void	makeSound() const;
	virtual ~Animal();
};

#endif