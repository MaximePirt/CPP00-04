#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->name = "Forgot_name";
	this->attack_damage = 20;
	this->hitpoints = 100;
	this->energy_points = 50;
	this->GateKeeperMode = false;
	std::cout << "ScavTrap " << name << " Has been created" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->attack_damage = 20;
	this->hitpoints = 100;
	this->energy_points = 50;
	this->GateKeeperMode = false;
	std::cout << "ScavTrap " << name << " Has been created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj): ClapTrap(obj)
{
	this->name = obj.name;
	this->attack_damage = obj.attack_damage;
	this->hitpoints = obj.hitpoints;
	this->energy_points = obj.energy_points;
	this->GateKeeperMode = obj.GateKeeperMode;
    std::cout << "Copy constructor ScavTrap called !" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " Has been destroyed" << std::endl;
}
void ScavTrap::attack(const std::string &target)
{
	if (this->hitpoints < 1)
	{
		std::cout << "ScavTrap " << this->name << " can't attack, it had not lifepoints lefts" << std::endl;
		return ;
	}
	if (this->energy_points > 0)
		this->energy_points--;
	else
	{
		std::cout << "ScavTrap " << this->name << " has no more energy or lifepoints and cant attack " << target << std::endl;
		return ;
	}
	
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}
void ScavTrap::guard_mode()
{
	if (this->hitpoints < 1)
	{
		std::cout << "ScavTrap " << this->name << " is already dead, it can't switch guard_mode" << std::endl;
		return ;
	}
	if (this->energy_points > 0)
		this->energy_points--;
	else
	{
		std::cout << "ScavTrap " << this->name << " has no more energy or lifepoints and can't switch guard_mode " << std::endl;
		return ;
	}
	this->GateKeeperMode = !this->GateKeeperMode;
	std::cout << "ScavTrap " << this->name << " switch Guard mode. ";
	if (this->GateKeeperMode)
		std::cout << "it is know protecting Gate" << std::endl;
	else
		std::cout << "it shut the gate down" << std::endl;

}