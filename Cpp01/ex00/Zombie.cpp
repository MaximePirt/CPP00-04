
#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	set_zombie_name(name);
}

std::string Zombie::get_zombie_name()
{
	return(this->name);
}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_zombie_name(const std::string &str)
{
	this->name = str;
}

Zombie::~Zombie()
{
	std::cout << this->name << " has been destroyed" << std::endl;
}