#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
#include <vector>
#include <utility>

class Harl
{
	public:
			Harl();
			void complain(std::string level);
			~Harl();
	private:
			void	debug(void);
			void	info(void);
			void	warning(void);
			void	error(void);
};

typedef	struct	s_action_choice
{
	std::pair<std::string, void(Harl::*)()>	debug;
	std::pair<std::string, void(Harl::*)()> info;
	std::pair<std::string, void(Harl::*)()> warning;
	std::pair<std::string, void(Harl::*)()> error;

}	t_action_choice;


#endif