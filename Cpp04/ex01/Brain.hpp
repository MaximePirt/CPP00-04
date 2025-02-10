#ifndef BRAIN_HPP
	#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
		Brain();
		Brain(const Brain &obj);
		Brain &operator=(const Brain &old);
		~Brain();
		void		set_idea(const std::string &idea);
		std::string	get_ideas(int index);

	private:
			std::string	_ideas[100];
};

#endif