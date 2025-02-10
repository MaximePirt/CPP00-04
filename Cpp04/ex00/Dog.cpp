#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Classic Animal also known as " << this->type << " has been created" << std::endl;

}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	this->type = obj.type;
	std::cout << "Clone of " << this->type << " has been created" << std::endl;

}

Dog &Dog::operator=(const Dog &old)
{
	if (this != &old)
		this->type = old.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "A " << this->type << " has been destroyed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark bark" << std::endl;
}
