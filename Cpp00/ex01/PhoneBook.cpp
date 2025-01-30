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

static	int	Check_Digit(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if  (!isdigit(str[i]))
		{
			std::cout << "\033[1;31mInput can only contain Digits\033[0m" << std::endl;
			return (1);
		}
	}
	return (0);
}

static int	Check_Phone_Number(std::string str)
{
	if (str.length() != 10)
	{
		std::cout << "\033[1;31mA Phone number is only 10 digit long\033[0m" << std::endl;
		return (1);
	}
	if (Check_Digit(str))
		return (1);
	return (0);
}

static int	Is_Empty(std::string str)
{
	if (str.empty())
	{
		std::cout << "\033[1;31mContact can't have empty fields\033[0m" << std::endl;
		return (1);
	}
	return (0);
}

static int Check_Alpha(std::string str)
{
	for(int i = 0; str[i]; i++)
	{
		if  (!isalpha(str[i]) && str[i] != ' ' && str[i] != '-')
		{
			std::cout << "\033[1;31mName can't contain non alphabetical character.\033[0m" << std::endl;
			return (1);
		}
	}
	return (0);
}

static int Filling_tab(std::string *answer)
{
	std::string input;
	std::cout << "\033[1;33mEnter your Contact First Name\033[0m" << std::endl;
	std::getline(std::cin, input);
	if (Check_Alpha(input) || Is_Eof() || Is_Empty(input))
		return (1);
	answer[0] = input;
	std::cout << "\033[1;33mEnter your Contact Last Name\033[0m" << std::endl;
	std::getline(std::cin, input);
	if (Check_Alpha(input) || Is_Eof() || Is_Empty(input))
		return (1);
	answer[1] = input;
	std::cout << "\033[1;33mEnter your Contact Nickname\033[0m" << std::endl;
	std::getline(std::cin, input);
	if (Is_Eof() || Is_Empty(input))
		return (1);
	answer[2] = input;
	std::cout << "\033[1;33mEnter your Contact Phone number\033[0m" << std::endl;
	std::getline(std::cin, input);
	if (Check_Phone_Number(input) || Is_Eof() || Is_Empty(input))
		return (1);
	answer[3] = input;
	std::cout << "\033[1;33mEnter your Contact Darkest Secret\033[0m" << std::endl;
	std::getline(std::cin, input);
	if (Is_Eof() || Is_Empty(input))
		return (1);
	answer[4] = input;
	std::cout << "\033[1;32mAdding your contact to the Phonebook...\033[0m" << std::endl;
	return (0);
}

int	PhoneBook::Add_contact_input()
{
	std::string	answer[5];

	if (Filling_tab(answer))
		return (1);
	int position = this->index % 8;
	this->profile[position].set_first_name(answer[0]);
	this->profile[position].set_last_name(answer[1]);
	this->profile[position].set_nickname(answer[2]);
	this->profile[position].set_phone_number(answer[3]);
	this->profile[position].set_secret(answer[4]);
	this->index++;
	return (0);
}

int	PhoneBook::add_contact()
{
	std::cout << "\033[1;32mAdding a contact\033[0m" << std::endl;
	if (this->index > 7)
		std::cout << "\033[1;31mToo many contact, the older one will be replaced by the new one\033[0m" << std::endl;
	Add_contact_input();
	return (0);
}

int	Calculate_Height(std::string *tab)
{
	int res;
	int tmp;
	int i;

	i = 0;
	res = 1;
	while (!tab[i].empty())
	{
		tmp = tab[i].length()/10;
		if (tmp > res)
			res = tmp;
		i++;
	}
	return (res);
}

void	print_table()
{
	std::cout << std::right << std::setw(10) << "index" << "|"
			  << std::setw(10) << "first name" << "|"
			  << std::setw(10) << "last name" << "|"
			  << std::setw(10) << "nickname" << "|" << std::endl;
	std::cout << std::setfill('-') << std::setw(10) << "-" << "+"
			  << std::setw(10) << "-" << "+"
			  << std::setw(10) << "-" << "+"
			  << std::setw(10) << "-" << "|" << std::endl;
	std::cout << std::left << std::setfill(' ');
}

void	print_display(std::string *tab)
{
	for (int i = 0; i < 5; i++)
	{
		int len = tab[i].length();
		if (len > 10)
			tab[i] = tab[i].substr(0, 9) + ".";
		for(int k = 10; k > len; k--)
			std::cout << " ";
		if (i < 4)
			std::cout << tab[i] << "|";
	}
	std::cout << std::endl;

}

void	PhoneBook::Print_Contact_List()
{
	for(int i = 0; i < 8; i++)
	{
		if (i + 1 > this->index)
			continue ;
		std::string tab[4];
		std::stringstream tmp;
		tmp << i + 1;
		tab[0] = tmp.str();
		tab[1] = this->profile[i].get_first_name();
		tab[2] = this->profile[i].get_last_name();
		tab[3] = this->profile[i].get_nickname();
		print_display(tab);
		std::cout << "\n" << std::setfill('-') << std::setw(10) << "-" << "+"
				  << std::setw(10) << "-" << "+"
				  << std::setw(10) << "-" << "+"
				  << std::setw(10) << "-" << "|" << std::setfill(' ') << std::endl;
	}
}

int	PhoneBook::Print_Cell(std::string	input)
{
	int position;

	position = std::stoi(input) - 1;
	if (!(position > -1 && position < 8))
	{
		std::cout << "\033[1;31mIndex doesn't exist, please choose between 1 and 8\033[0m" << std::endl;
		return (1);
	}
	if (this->profile[position].get_first_name().length() == 0)
	{
		std::cout << "\033[1;31mThis Contact doesn't have any information yet\033[0m" << std::endl;
		return (1);
	}
	std::cout << "\033[1;35mFirst Name : \033[0m" << this->profile[position].get_first_name() << std::endl;
	std::cout << "\033[1;35mLast Name : \033[0m" << this->profile[position].get_last_name() << std::endl;
	std::cout << "\033[1;35mNickName : \033[0m" << this->profile[position].get_nickname() << std::endl;
	std::cout << "\033[1;35mPhone Number : \033[0m" << this->profile[position].get_phone_number() << std::endl;
	std::cout << "\033[1;35mDarkest secret : \033[0m" << this->profile[position].get_secret() << std::endl;
	std::cout << std::endl;
	return (0);
}

int	PhoneBook::Search_Action()
{
	std::string	input;
	std::cout << "\033[1;32mSearching in contact...\033[0m" << std::endl;
	print_table();
	Print_Contact_List();
	std::cout << "\033[1;32m...Which contact are you interest about ? [Index Only]\033[0m" << std::endl;
	std::getline(std::cin, input);
	if (Is_Eof() ||Check_Digit(input) || Is_Empty(input))
		return (1);
	if (Print_Cell(input))
		return (1);
	return (0);
}

int	PhoneBook::sort_input(const std::string& str)
{
	if (str == "EXIT")
		return (1);
	else if (str == "ADD")
		add_contact();
	else if (str == "SEARCH")
		Search_Action();
	else
		std::cout << "\033[1;31mError processing input, you can only submit ADD, SEARCH or EXIT\033[0m" << std::endl;
//	std::cout << std::string(50, '-') << std::endl;
	return (0);
}

PhoneBook::~PhoneBook()
{
	std::cout << "Phonebook is destroyed" << std::endl;
}