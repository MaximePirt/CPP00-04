#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Classic animal also known as " << this->type << " or the curtain's terror has been created" << std::endl;

}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	this->type = obj.type;
	std::cout << "A " << this->type << " clone has been created" << std::endl;

}

Cat::~Cat()
{
	std::cout << "Oh my god we just destroyed a " << this->type << std::endl;
}
void makeSound()
{
	std::cout << "MIAAAAAOUUUUUUUUUU   ...    MIAOUUUUUU" << std::endl;
}
