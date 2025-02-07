#include "ClapTrap.hpp"

int main()
{
	// Creations
	ClapTrap Clap("Trap");
	ClapTrap Clap2("Second_trap_which_do_nothing");

	Clap.attack("John the bad guy");
	Clap.takeDamage(5);
	Clap.attack("John the bad guy");
	Clap.attack("John the bad guy");
	Clap.beRepaired(2);
	Clap.takeDamage(5);
	Clap.takeDamage(5);
	Clap.attack("John the bad guy");
	Clap.attack("John the bad guy");
	Clap.attack("John the bad guy");
	Clap.attack("John the bad guy");
	Clap.attack("John the bad guy");
	Clap.takeDamage(5);
	Clap.beRepaired(2);
	Clap.beRepaired(2);
	Clap.beRepaired(2);
	Clap.beRepaired(2);



	return 0;
}