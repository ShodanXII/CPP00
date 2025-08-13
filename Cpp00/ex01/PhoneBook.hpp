#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class	PhoneBook
{
	Contact contact[8];
	void	print_contact(int i);
public:
	std::string Get_firstName(int i);
	std::string Get_LastName(int i);
	std::string Get_NakeName(int i);
	std::string Get_Number(int i);
	std::string get_darkest_secret(int i);
	void set_firstName(std::string val&, int i);
	void set_firstName(std::string val&, int i);
	void set_firstName(std::string val&, int i);
	void set_firstName(std::string val&, int i);
};

#endif