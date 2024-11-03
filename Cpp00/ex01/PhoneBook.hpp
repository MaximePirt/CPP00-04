#ifndef	PHONEBOOK_HPP
#	define	PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook
{
	public:
		PhoneBook();
		int	add_contact();
		int	Add_contact_input();
		int	sort_input(const std::string& str);

	~PhoneBook();
	private :
		int			index;
		Contact	profile[8];
};
//TODO: CHECK NORM UPPERCAMELCASE
#endif