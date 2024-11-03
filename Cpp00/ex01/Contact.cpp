#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "Contact is create" << std::endl;
}

std::string	Contact::get_first_name()
{
	return (this->first_name);
}

void	Contact::set_first_name(const std::string str)
{
	this->first_name = str;
}

std::string	Contact::get_last_name()
{
	return (this->last_name);
}
void	Contact::set_last_name(const std::string str)
{
	this->last_name = str;
}

std::string	Contact::get_nickname()
{
	return (this->nickname);
}

void	Contact::set_nickname(const std::string str)
{
	this->nickname = str;
}

std::string	Contact::get_phone_number()
{
	return (this->phone_number);
}

void	Contact::set_phone_number(const std::string str)
{
	this->phone_number = str;
}

std::string	Contact::get_secret()
{
	return (this->secret);
}

void	Contact::set_secret(const std::string str)
{
	this->secret = str;
}

Contact::~Contact()
{
	std::cout << "Contact is destroyed" << std::endl;
}