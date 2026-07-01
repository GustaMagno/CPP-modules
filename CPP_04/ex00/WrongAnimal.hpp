#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <math.h>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal &other);
	WrongAnimal			&operator=(WrongAnimal &other);
	std::string			getType() const;
	void		makeSound() const;
	~WrongAnimal();
};

#endif