#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	// Creations
	ClapTrap Clap("Trap");
	ScavTrap Scav("scavv");
	ScavTrap Forgot;
	FragTrap base;
	FragTrap fragdeux("my_name");

	base.attack("Vilain John");
	base.takeDamage(50);
	base.beRepaired(20);
	FragTrap copy(base);
	copy.highFivesGuys();
	fragdeux.highFivesGuys();

	return (0);
}