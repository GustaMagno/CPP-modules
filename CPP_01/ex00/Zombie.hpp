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
		Zombie(std::string name);
		~Zombie();
		void	announce( void );
};