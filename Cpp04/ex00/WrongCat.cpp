#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "WRONG cat also known as " << this->type << " has been created" << std::endl;

}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
	this->type = obj.type;
	std::cout << "A " << this->type << " clone has been created" << std::endl;

}

WrongCat &WrongCat::operator=(const WrongCat &old)
{
	if (this != &old)
		this->type = old.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Oh my god we just destroyed a " << this->type << std::endl;
}
void WrongCat::makeSound() const
{
	std::cout << "WRRRROOOOOONG MIAOUUUUUUU" << std::endl;
}
