#ifndef CLAPTRAP_HPP
	#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	public:
	// Constructor and Destructor
		ClapTrap(std::string name = "ClapName");
		~ClapTrap();
	// ClapTrap functions
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string name;
		unsigned int hitpoints;
		unsigned int energy_points;
		unsigned int attack_damage;
};

#endif