#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon		*HumanWeapon;
		std::string	HumanName;
	public:
		HumanB(std::string name);
		void	attack();
		void	setWeapon(Weapon& type);
};

#endif