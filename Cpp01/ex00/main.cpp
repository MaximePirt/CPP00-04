#include "Zombie.hpp"

int main ()
{
	std::cout << "Batterie de test" << std::endl;

	std::cout << "Test 1" << std::endl;
	Zombie *zombie = newZombie("Jean");
	zombie->announce();
	delete zombie;
//=============================================
	std::cout << "Test 2" << std::endl;
	randomChump("ohputaing");
//=============================================
	std::cout << "Test 3" << std::endl;
	Zombie zombie2("Jean");
	zombie2.announce();
//=============================================
	std::cout << "Test 4" << std::endl;
	Zombie zombie3;
	zombie3.announce();
//=============================================
	std::cout << "Test 5" << std::endl;
	Zombie *zombie4 = newZombie("Jean");
	zombie4->announce();
	delete zombie4;
//=============================================
	std::cout << "end test" << std::endl;

}