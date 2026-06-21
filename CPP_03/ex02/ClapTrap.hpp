#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cstring>
# include <cstdlib>
# include <string>
# include <iomanip>
# include <math.h>

class ClapTrap
{
	private:

	protected:
		std::string name;
		int			hitpoints;
		int			energypoints;
		int			attackdmg;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &other);
		ClapTrap(const std::string &name);
		~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &other);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif