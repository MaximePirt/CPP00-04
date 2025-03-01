#include "Character.hpp"
#include "MateriaSource.hpp"


int main()
{

	std::cout << "=== Mandatory tests from the subject ===" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	std::cout << "\n\n=== Personnals test ===\n" << std::endl;

    std::cout << "=== MateriaSource init ===" << std::endl;
    IMateriaSource* book = new MateriaSource();
    book->learnMateria(new Ice());
    book->learnMateria(new Cure());

    std::cout << "\n=== Character creation ===" << std::endl;
    ICharacter* first_character = new Character("first_character");

    std::cout << "\n=== Creation and equip materias ===" << std::endl;
    AMateria* materias[4];
    for (int i = 0; i < 4; i++)
    {
        materias[i] = book->createMateria(i % 2 == 0 ? "ice" : "cure");
        if (materias[i])
            first_character->equip(materias[i]);
    }

    std::cout << "\n=== Adding a 5th Materias (failed) ===" << std::endl;
    AMateria* extraMateria = book->createMateria("ice");
    if (extraMateria)
    {
        first_character->equip(extraMateria);
        delete extraMateria;
    }

    std::cout << "\n=== Other characters creation ===" << std::endl;
    ICharacter* other_character = new Character("other_character");

    std::cout << "\n=== Use of Materias ===" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        first_character->use(i, *other_character);
    }

    std::cout << "\n=== Use of an empty inventory slot ===" << std::endl;
    first_character->use(4, *other_character);

    std::cout << "\n=== Unequip tests ===" << std::endl;
    AMateria* unequipped[2] = {NULL, NULL};
    for (int i = 0; i < 2; i++)
    {
        unequipped[i] = materias[i];
        first_character->unequip(i);
    }

    std::cout << "\n=== Unequiped Materias cleaning ===" << std::endl;
    for (int i = 0; i < 2; i++)
    {
        if (unequipped[i])
            delete unequipped[i];
    }


    std::cout << "\n=== Objects cleaning ===" << std::endl;
    delete other_character;
    delete first_character;
    delete book;

    std::cout << "\n=== End of Program ===" << std::endl;
    return 0;
}
