#include "Zombie.hpp"

int main ()
{
	int num = 5;

	Zombie zombie("Jean");

	Zombie *horde = zombieHorde(num, "Zombie");
	for(int i = 0; i < num; i++)
		horde[i].announce();
	delete[] horde;
}