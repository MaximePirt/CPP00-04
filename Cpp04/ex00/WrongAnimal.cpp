#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "Strange_WrongAnimal";
	std::cout << "A " << this->type << " has been created, be careful" << std::endl;

}

WrongAnimal::WrongAnimal(std::string name)
{
	this->type = name;
	std::cout << "A " << this->type << " has been created" << std::endl;

}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	this->type = obj.type;
	std::cout << "A copy of " << this->type << " has been created" << std::endl;

}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &old)
{
	if (this != &old)
		this->type = old.type;
	return (*this);
}


WrongAnimal::~WrongAnimal()
{
	std::cout << "Oh my god, they destroyed a " << this->type << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Shkroutch shkroutch.. OHMYGOD A WRONG STRANGE ANIMAL IS HERE" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return(this->type);
}
