#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "This is the normal animal tests" << std::endl;
	std::cout << "----------       -------------" << std::endl;

	const Animal* meta = new Animal();
	const Animal* this_is_a_dog = new Dog();
	const Animal* this_is_a_cat = new Cat();
	std::cout << this_is_a_dog->getType() << " " << std::endl;
	std::cout << this_is_a_cat->getType() << " " << std::endl;
	this_is_a_cat->makeSound();
	this_is_a_dog->makeSound();
	meta->makeSound();


	std::cout << "----------       -------------" << std::endl;
	std::cout << "This is the WRONG animal tests" << std::endl;
	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wronnnng_cat = new WrongCat();
	std::cout << wronnnng_cat->getType() << " " << std::endl;
	wronnnng_cat->makeSound();
	std::cout << "----------       -------------" << std::endl;
	std::cout << "----------END--TEST------------" << std::endl;
	wrong_meta->makeSound();

return 0;
}