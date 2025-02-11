#include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "Strange_Animal";
	std::cout << "A " << this->type << " has been created, be careful" << std::endl;

}

Animal::Animal(std::string name)
{
	this->type = name;
	std::cout << "A " << this->type << " has been created" << std::endl;

}

Animal::Animal(const Animal &obj)
{
	this->type = obj.type;
	std::cout << "A copy of " << this->type << " has been created" << std::endl;

}

Animal &Animal::operator=(const Animal &old)
{
	if (this != &old)
		this->type = old.type;
	return (*this);
}


Animal::~Animal()
{
	std::cout << "Oh my god, we destroyed a " << this->type << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Shkroutch shkroutch.. what a strange noise..." << std::endl;
}

std::string Animal::getType(void) const
{
	return(this->type);
}
