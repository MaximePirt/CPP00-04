#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "An Animal got the benefit of a Brain !!! By Odin, By Thor, it will use it" << std::endl;
}
Brain::Brain(const Brain &obj)
{
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = obj._ideas[i];
	std::cout << "A brain was cloned, hope it'll be usefull" << std::endl;
}
Brain  &Brain::operator=(const Brain &old)
{
	if (this != &old)
	{
		for(int i = 0; i < 100; i++)
			this->_ideas[i] = old._ideas[i];
	}
	std::cout << "A copy constructor of a brain was used right here" << std::endl;
	return (*this);
}


void	Brain::set_idea(const std::string &idea)
{
	if(this->_ideas[99].length())
	{
		std::cout << "This animal has too much things in mind, he can't learn this idea and forgot it instantanly" << std::endl;
		return ;
	}
	int i;
	for(i = 0; this->_ideas[i].length() != 0; i++)
		;
	this->_ideas[i] = idea;
	std::cout << "New skill just learned : " << idea << std::endl;
}

std::string	Brain::get_ideas(int index)
{
	if (index < 0 || index > 99)
	{
		std::cout << "Get ideas failed" << std::endl;
		return (NULL);
	}
	if (_ideas[index].length() < 1)
	{
		std::cout << "No idea in this Brain's index" << std::endl;
		return (NULL);
	}

	return (this->_ideas[index]);
}



Brain::~Brain()
{
	std::cout << "Its brain just vanished in the air" << std::endl;
}