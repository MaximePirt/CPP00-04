#ifndef ZOMBIE_HPP
#	define ZOMBIE_HPP

#include <iostream>


class Zombie
{
	public:
		Zombie(std::string name = "<name>");
		std::string	get_zombie_name();
		void		set_zombie_name(const std::string &str);
		void		announce(void);
		~Zombie();

	private:
		std::string name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif