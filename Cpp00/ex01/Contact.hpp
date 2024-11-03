#ifndef CONTACT_HPP
#	define CONTACT_HPP

#include <iostream>

class Contact
{
	public :
		Contact();
		std::string get_first_name();
		void		set_first_name(const std::string str);
		std::string	get_last_name();
		void		set_last_name(const std::string str);
		std::string	get_nickname();
		void		set_nickname(const std::string str);
		std::string	get_phone_number();
		void		set_phone_number(const std::string str);
		std::string	get_secret();
		void		set_secret(const std::string str);
		~Contact();
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string phone_number;
		std::string	secret;
};
#endif