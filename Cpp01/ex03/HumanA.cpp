#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(&weapon)
{
	std::cout << this->name << " has been created" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanA::set_weapon(std::string str)
{
	this->weapon->setType(str);
}

const	std::string&	HumanA::get_name()
{
	return(this->name);
}

void	HumanA::set_name(std::string &str)
{
	this->name = str;
}

HumanA::~HumanA()
{
	std::cout << this->name << " has been destroyed" << std::endl;
}