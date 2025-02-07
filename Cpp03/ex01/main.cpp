#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	// Creations
	ClapTrap Clap("Trap");
	ScavTrap Scav("bite");
	ScavTrap Forgot;

	// Attack  to check scavtrap stats
	Scav.attack("John the bad guy");
	Scav.takeDamage(5);
	Scav.attack("John the bad guy");
	Scav.attack("John the bad guy");
	Scav.beRepaired(2);
	Scav.takeDamage(5);
	Scav.takeDamage(5);
	Scav.attack("John the bad guy");
	Scav.attack("John the bad guy");
	Scav.attack("John the bad guy");
	Scav.attack("John the bad guy");
	Scav.attack("John the bad guy");
	Scav.takeDamage(5);
	Scav.beRepaired(2);
	Scav.beRepaired(2);
	Scav.beRepaired(2);
	Scav.beRepaired(2);

	// called copy constructor
	ScavTrap Scavbis(Scav);
	// check life dependance
	Scavbis.takeDamage(20);

	// check guard mod boolean
	Scav.guard_mode();
	Scav.guard_mode();
	Scav.guard_mode();
	Scav.guard_mode();
	Scav.guard_mode();


	return (0);
}