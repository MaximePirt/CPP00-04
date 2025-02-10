#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->_cat_brain = new Brain();
	std::cout << "Classic animal also known as " << this->type << " or the curtain's terror has been created" << std::endl;

}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	this->type = obj.type;
	this->_cat_brain = new Brain(*obj._cat_brain);
	std::cout << "A " << this->type << " clone has been created" << std::endl;

}

Cat &Cat::operator=(const Cat &old)
{
	if (this != &old)
	{
		this->type = old.type;
		this->_cat_brain = old._cat_brain;
	}
	return (*this);
}

Cat::~Cat()
{
	delete this->_cat_brain;
	std::cout << "Oh my god we just destroyed a " << this->type << std::endl;
}
void Cat::makeSound() const
{
	std::cout << "MIAAAAAOUUUUUUUUUU   ...    MIAOUUUUUU" << std::endl;
}

void	Cat::set_idea(const std::string &idea)
{
	_cat_brain->set_idea(idea);
}

std::string	Cat::get_ideas(int index)
{
	if (index < 0 || index > 99)
	{
		std::cout << "Get ideas failed" << std::endl;
		return (NULL);
	}
	return (_cat_brain->get_ideas(index));
}

void	Cat::print_cat_idea(int index) const
{
	if (index < 0 || index > 99)
	{
		std::cout << "Your cat's brain isn't big enough for that's much idea" << std::endl;
	}
	std::string tmp;
	tmp = this->_cat_brain->get_ideas(index);
	if (tmp.length() == 0)
		return ;
	std::cout << "Cat's idea number " << index << " " << tmp << std::endl; 
}
