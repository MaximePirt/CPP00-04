
#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->setType(type);
	std::cout << this->type << " is now initialized" << std::endl;
}

const std::string	&Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(const std::string &str)
{
	this->type = str;
}

Weapon::~Weapon()
{
	std::cout << this->type << " is now destroyed" << std::endl;
}