#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <cstring>
# include <cstdlib>
# include <string>
# include <iomanip>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon();
		Weapon(std::string value);
		std::string&	getType();
		void			setType(std::string value);
};

#endif