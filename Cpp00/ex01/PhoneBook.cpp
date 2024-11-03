#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
}

static	int Is_Eof()
{
	std::cin.eof();
	if (std::cin.eof() || std::cin.fail())
	{
		std::cout << "\033[1;31mEnd of input or input error detected.\033[0m" << std::endl;
		return (1);
	}
	return (0);
}

int	Check_Phone_Number(std::string str)
{
	if (str.length() != 10)
	{
		std::cout << "\033[1;31mA Phone number is only 10 digit long\033[0m" << std::endl;
		return (1);
	}
	for (int i = 0; str[i]; i++)
	{
		if  (!isdigit(str[i]))
		{
			std::cout << "\033[1;31mPhone number can only contain Digits\033[0m" << std::endl;
			return (1);
		}
	}
	return (0);
}

int Check_Alpha(std::string str)
{
	for(int i = 0; str[i]; i++)
	{
		if  (!isalpha(str[i]))
		{
			std::cout << "\033[1;31mName can't contain non alphabetical character.\033[0m" << std::endl;
			return (1);
		}
	}
	return (0);
}

int Filling_tab(std::vector<std::string> *answer)
{
	std::string input;
	std::cout << "\033[1;33mEnter your Contact First Name\033[0m" << std::endl;
	std::cin >> input;
	if (Check_Alpha(input) || Is_Eof())
		return (1);
	answer->push_back(input);
	std::cout << "\033[1;33mEnter your Contact Last Name\033[0m" << std::endl;
	std::cin >> input;
	if (Check_Alpha(input) || Is_Eof())
		return (1);
	answer->push_back(input);
	std::cout << "\033[1;33mEnter your Contact Nickname\033[0m" << std::endl;
	std::cin >> input;
	if (Is_Eof())
		return (1);
	answer->push_back(input);
	std::cout << "\033[1;33mEnter your Contact Phone number\033[0m" << std::endl;
	std::cin >> input;
	if (Check_Phone_Number(input) || Is_Eof())
		return (1);
	answer->push_back(input);
	std::cout << "\033[1;33mEnter your Contact Darkest Secret\033[0m" << std::endl;
	std::cin >> input;
	if (Is_Eof())
		return (1);
	answer->push_back(input);
	std::cout << "\033[1;32mAdding your contact to the Phonebook...\033[0m" << std::endl;
	return (0);
}

int	PhoneBook::Add_contact_input()
{
	std::vector<std::string> answer;

	if (Filling_tab(&answer))
		return (1);
	this->index++;
	int position = this->index % 8;
	this->profile[position].set_first_name(answer[0]);
	this->profile[position].set_last_name(answer[1]);
	this->profile[position].set_nickname(answer[2]);
	this->profile[position].set_phone_number(answer[3]);
	this->profile[position].set_secret(answer[4]);
/////////TODO: Remove
	std::cout << "First Name : " << this->profile[position].get_first_name() << std::endl;
	std::cout << "Last Name : " << this->profile[position].get_last_name() << std::endl;
	std::cout << "Nickname Name : " << this->profile[position].get_nickname() << std::endl;
	std::cout << "Phone Number : " << this->profile[position].get_phone_number() << std::endl;
	std::cout << "Secret Name : " << this->profile[position].get_secret() << std::endl;

	return (0);
}

int	PhoneBook::add_contact()
{
	std::cout << "\033[1;32mAdding a contact\033[0m" << std::endl;
	if (this->index > 7)
	{
		std::cout << "\033[1;31mToo many contact, the older one will be replaced by the new one\033[0m" << std::endl;
	}
	Add_contact_input();
	return (0);
}

int	PhoneBook::sort_input(const std::string& str)
{
	if (str == "EXIT")
	{
		std::cout << "Exit submit. End program" << std::endl;
		return (1);
	}
	else if (str == "ADD")
	{
		add_contact();
	}
	else if (str == "SEARCH")
	{
		std::cout << "\033[1;32mSearching in contact\033[0m" << std::endl;
	}
	else
		std::cout << "\033[1;31mError processing input, you can only submit ADD, SEARCH or EXIT\033[0m" << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	return (0);
}

PhoneBook::~PhoneBook()
{
	std::cout << "Phonebook is destroyed" << std::endl;
}