#ifndef CLAPTRAP_HPP
	#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	public:
	// Constructor and Destructor
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &obj);
		~ClapTrap();
	// ClapTrap functions
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		std::string name;
		unsigned int hitpoints;
		unsigned int energy_points;
		unsigned int attack_damage;
};

#endif