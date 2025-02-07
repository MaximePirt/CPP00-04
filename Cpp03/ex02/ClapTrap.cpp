#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->name = "Forgot Clap_Name";
	this->attack_damage = 0;
	this->hitpoints = 10;
	this->energy_points = 10;
	std::cout << "ClapTrap [" << this->name << "] has been created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->attack_damage = 0;
	this->hitpoints = 10;
	this->energy_points = 10;
	std::cout << "ClapTrap [" << this->name << "] has been created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	this->name = obj.name;
	this->attack_damage = obj.attack_damage;
	this->hitpoints = obj.hitpoints;
	this->energy_points = obj.energy_points;
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap [" << this->name << "] has been destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hitpoints < 1)
	{
		std::cout << "ClapTrap " << this->name << " can't attack, it had not lifepoints lefts" << std::endl;
		return ;
	}
	if (this->energy_points > 0)
		this->energy_points--;
	else
	{
		std::cout << "ClapTrap " << this->name << " has no more energy or lifepoints and cant attack " << target << std::endl;
		return ;
	}
	
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitpoints < 1)
	{
		std::cout << "ClapTrap " << this->name << " is already dead, attacking it is a little bit rude" << std::endl;
		return ;
	}
	if (amount > this->hitpoints)
		this->hitpoints = 0;
	else
		this->hitpoints -= amount;
	std::cout << "ClapTrap " << this->name << " Takes  " << amount << " damage, it have  " << this->hitpoints << " energy points left!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitpoints < 1)
	{
		std::cout << "Too late to repair ClapTrap " << this->name << ", it had not lifepoints lefts" << std::endl;
		return ;
	}
	if (this->energy_points > 0 && this->hitpoints)
		this->energy_points--;
	else
	{
		std::cout << "ClapTrap " << this->name << " has no more energy and cant repair itself" << std::endl;
		return ;
	}

	this->hitpoints += amount;
	std::cout << "ClapTrap " << this->name << " Repaired  " << amount << " energy_points, it have  " << this->hitpoints << " energy points left!" << std::endl;

}
