#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		void					attack();
		const	std::string&	get_name();
		void					set_name(std::string &str);
		void					set_weapon(std::string str);
		~HumanA();
	private:
		std::string name;
		Weapon *weapon;

};

#endif