#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "Subject test" << std::endl;
	std::cout << "----------       -------------" << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << "----------       -------------" << std::endl;
	std::cout << "Array test" << std::endl;
	std::cout << "----------       -------------" << std::endl;

	const int size = 100;
    Animal* animals[size];

    for (int i = 0; i < size / 2; i++)
        animals[i] = new Dog();
    for (int i = size / 2; i < size; i++)
        animals[i] = new Cat();

    for (int i = 0; i < size; i++)
		delete animals[i];

	std::cout << "----------       -------------" << std::endl;
	std::cout << "My test" << std::endl;
	std::cout << "----------       -------------" << std::endl;
    Dog myDog;
	Cat myCat;
    myDog.set_idea("Chase the cat!");
    myDog.set_idea("Dig a hole in the garden!");
	myCat.set_idea("Escape the Dog!");
    myCat.set_idea("Climb a tree!");
	/////////
    myCat.print_cat_idea(0);
    myCat.print_cat_idea(1);
    myDog.print_dog_idea(0);
    myDog.print_dog_idea(1);


	std::cout << "----------       -------------" << std::endl;
	std::cout << "Loop test" << std::endl;
	std::cout << "----------   Setting    -------------" << std::endl;
	for(int count = 0; count < 100; count++)
	{
		if (count % 2)
			myDog.set_idea("This is an idea % 2");
		else
			myDog.set_idea("This is an idea not % 2");
	}

		
	std::cout << "----------       -------------" << std::endl;
	std::cout << "Loop test" << std::endl;
	std::cout << "----------  Printing     -------------" << std::endl;
		for(int count = 0; count < 100; count++)
			myDog.print_dog_idea(count);

	std::cout << "----------       -------------" << std::endl;
	std::cout << "Fewer with Cats" << std::endl;
	std::cout << "------- Setting and printing --------" << std::endl;
	for(int count = 0; count < 20; count++)
	{
		if (count % 2)
			myCat.set_idea("This is an idea % 2");
		else
			myCat.set_idea("This is an idea not % 2");
	}
		for(int count = 0; count < 20; count++)
			myCat.print_cat_idea(count);

	std::cout << "----------       -------------" << std::endl;
	std::cout << "Invalid number idea test" << std::endl;
	std::cout << "----------       -------------" << std::endl;
	myDog.set_idea("That's too much idea");
	myDog.set_idea("That's too much idea");
	myDog.print_dog_idea(101);
	myDog.print_dog_idea(-1);
	myCat.set_idea("That's too much idea");
	myCat.set_idea("That's too much idea");
	myCat.print_cat_idea(101);
	myCat.print_cat_idea(-1);

	return 0;
}