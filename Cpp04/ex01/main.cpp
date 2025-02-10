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
	std::cout << "My test" << std::endl;
	std::cout << "----------       -------------" << std::endl;
    Dog myDog;
	Cat myCat;
    myDog.set_idea("Chase the cat!");
    myDog.set_idea("Dig a hole in the garden!");
	myCat.set_idea("Escape the Dog!");
    myCat.set_idea("Climb a tree!");

    myCat.print_cat_idea(0);
    myCat.print_cat_idea(1);
    myDog.print_dog_idea(0);
    myDog.print_dog_idea(1);

	std::cout << "----------       -------------" << std::endl;
	std::cout << "Loop test" << std::endl;
	std::cout << "----------       -------------" << std::endl;

	std::cout << "----------       -------------" << std::endl;
	std::cout << "Subject test" << std::endl;
	std::cout << "----------       -------------" << std::endl;
	return 0;
}