#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl has been created" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-\n"
				 "ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
				 "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
				 "years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::vector<std::pair<std::string, void (Harl::*)()> > action_choice;
	action_choice.push_back(std::pair<std::string, void(Harl::*)()>("debug", &Harl::debug));
	action_choice.push_back(std::pair<std::string, void(Harl::*)()>("info", &Harl::info));
	action_choice.push_back(std::pair<std::string, void(Harl::*)()>("warning", &Harl::warning));
	action_choice.push_back(std::pair<std::string, void(Harl::*)()>("error", &Harl::error));

	void (Harl::*selected_choice)(void) = NULL;
	for(std::vector<std::pair<std::string, void(Harl::*)(void)> >::iterator tmp = action_choice.begin(); tmp != action_choice.end(); tmp++)
	{
		if (tmp->first == level)
		{
			selected_choice = tmp->second;
			break;
		}
	}
	if (!selected_choice)
	{
		std::cerr << "Invalid input, Harl only take \"debug\" \"info\" \"warning\" or \"error\" as an input" << std::endl;
		return ;
	}
	(this->*selected_choice)();
}

Harl::~Harl()
{
	std::cout << "Harl has been destroyed" << std::endl;
}
