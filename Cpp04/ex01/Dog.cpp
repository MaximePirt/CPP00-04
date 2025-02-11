#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->_dog_brain = new Brain();
	std::cout << "Classic Animal also known as " << this->type << " has been created" << std::endl;

}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	this->type = obj.type;
	this->_dog_brain = new Brain(*obj._dog_brain);
	std::cout << "Clone of " << this->type << " has been created" << std::endl;

}

Dog &Dog::operator=(const Dog &old)
{
	if (this != &old)
	{
		this->type = old.type;
		this->_dog_brain = old._dog_brain;
	}
	return (*this);
}

Dog::~Dog()
{
	delete this->_dog_brain;
	std::cout << "A " << this->type << " has been destroyed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark bark" << std::endl;
}

void	Dog::set_idea(const std::string &idea)
{
	_dog_brain->set_idea(idea);
}

std::string	Dog::get_ideas(int index)
{
	if (index < 0 || index > 99)
	{
		std::cout << "Get ideas failed" << std::endl;
		return (NULL);
	}
	std::string tmp = _dog_brain->get_ideas(index);
	if (tmp.length() < 1)
		return (NULL);
	return (tmp);
}

void	Dog::print_dog_idea(int index) const
{
	if (index < 0 || index > 99)
	{
		std::cout << "Your dog's brain isn't big enough for that's much idea" << std::endl;
		return ;

	}
	std::string tmp;
	tmp = this->_dog_brain->get_ideas(index);
	if (tmp.length() == 0)
		return ;
	std::cout << "Dog's idea number " << index << " " << tmp << std::endl; 
}