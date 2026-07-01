#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <math.h>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(Brain &other);
	Brain	&operator=(Brain &other);
	~Brain();
};

#endif