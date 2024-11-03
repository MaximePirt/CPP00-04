#include "PhoneBook.hpp"



int main (int argc, char **argv)
{
	(void)argc;
	(void)argv;
	std::string number;
	PhoneBook obj;

	while (true)
	{
		std::cout << "\033[1;36mEnter ADD, SEARCH OR EXIT : \033[0m";
		std::cin >> number;
		std::cin.eof();
		if (std::cin.eof() || std::cin.fail())
		{
			std::cout << "\033[1;31mEnd of input or input error detected.\033[0m" << std::endl;
			break;
		}
		std::cout << "\033[1;36mYou entered : \033[1;35m" << number << "\033[0m" << std::endl;
		std::cout << std::string(50, '-') << std::endl;
		if (obj.sort_input(number))
			break;
	}
	return (0);
}