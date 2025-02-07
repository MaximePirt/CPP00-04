#ifndef FRAGTRAP_HPP
	#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &obj);
		~FragTrap();
		void highFivesGuys(void);
	private:
};

#endif