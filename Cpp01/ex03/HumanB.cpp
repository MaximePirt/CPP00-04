#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	this->set_name(name);
	std::cout << this->name << " has been created" << std::endl;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks";
	if (!this->weapon->getType().empty())
		std::cout <<  " with their " << this->weapon->getType();
	std::cout << std::endl;
}

const	std::string&	HumanB::get_name()
{
	return(this->name);
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}


void	HumanB::set_name(std::string &str)
{
	this->name = str;
}

HumanB::~HumanB()
{
	std::cout << this->name << " has been destroyed" << std::endl;
}