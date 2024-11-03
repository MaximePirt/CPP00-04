#include "Zombie.hpp"

int main ()
{
	Zombie zombie("Jean");
	Zombie zombie2;

	Zombie *nouveau_zomb = newZombie("michel");
	zombie.announce();
	zombie2.announce();
	nouveau_zomb->announce();
	delete nouveau_zomb;
	randomChump("ohputaing");

}