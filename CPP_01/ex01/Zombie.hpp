#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <iomanip>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		~Zombie();
		void	announce( void );
		void	setName(std::string name);
};