#include "Harl.hpp"

int main (void)
{
	Harl Harl;
	std::cout << "\nHarl using debug" << std::endl;
	Harl.complain("debug");
	std::cout << "\nHarl using info" << std::endl;
	Harl.complain("info");
	std::cout << "\nHarl using warning" << std::endl;
	Harl.complain("warning");
	std::cout << "\nHarl using error" << std::endl;
	Harl.complain("error");
	std::cout << "\nHarl with wrong input" << std::endl;
	Harl.complain("ifhjweifhwef");
	std::cout << std::endl;
	return (0);
}