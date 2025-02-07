#include "Zombie.hpp"

int main()
{
    std::cout << "\n--- Test 1 : Création d'un zombie unique ---" << std::endl;
    Zombie zombie1("ZombieOne");
    zombie1.announce();
//=============================================
    std::cout << "\n--- Test 2 : Modification du nom d'un zombie ---" << std::endl;
    zombie1.set_zombie_name("NewZombieName");
    std::cout << "Nouveau nom: " << zombie1.get_zombie_name() << std::endl;
    zombie1.announce();
//=============================================
    int num = 3;
    std::cout << "\n--- Test 3 : Création d'une horde de " << num << " zombies ---" << std::endl;
    Zombie *horde = zombieHorde(num, "HordeZombie");
    for(int i = 0; i < num; i++)
        horde[i].announce();
//=============================================
    std::cout << "\n--- Test 4 : Vérification des noms de la horde ---" << std::endl;
    for(int i = 0; i < num; i++)
        std::cout << "Zombie " << i + 1 << " : " << horde[i].get_zombie_name() << std::endl;
//=============================================
    std::cout << "\n--- Test 5 : Destruction de la horde de zombies ---" << std::endl;
    delete[] horde;
//=============================================
    std::cout << "\n--- Test 6 : Création et destruction immédiate d'un zombie ---" << std::endl;
    {
        Zombie tempZombie("TempZombie");
        tempZombie.announce();
    }

    return 0;
}
