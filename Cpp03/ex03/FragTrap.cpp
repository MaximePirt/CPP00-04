#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->name = "Default_Frag_name";
	this->attack_damage = 30;
	this->energy_points = 100;
	this->hitpoints = 100;
	std::cout << "Default FragTrap Creation" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->attack_damage = 30;
	this->energy_points = 100;
	this->hitpoints = 100;
	std::cout << "FragTrap " << name << " has been created" << std::endl;

}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	this->name = obj.name;
	this->attack_damage = obj.attack_damage;
	this->energy_points = obj.energy_points;
	this->hitpoints = obj.hitpoints;
	std::cout << "Copy constructor " << name << " has been called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &old)
{
	if (this != &old)
	{
		this->name = old.name;
		this->attack_damage = old.attack_damage;
		this->hitpoints = old.hitpoints;
		this->energy_points = old.energy_points;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " has been destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Hey guys, it's "<< this->name << " you look soooo cool ! Wanna High Five? 🙌 🐸 🎉" << std::endl;
}
