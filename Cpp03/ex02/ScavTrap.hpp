#ifndef SCAVTRAP_HPP
	#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &obj);
		 ~ScavTrap();
		 void attack(const std::string &target);
		 void guard_mode();
	private:
		bool GateKeeperMode;
};

#endif