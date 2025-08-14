#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <limits>
#include <cstdlib>
#include <cstdio>


class	PhoneBook
{
	Contact contact[8];
	void	print_contact(int i);
    std::string align_col_sprintf(std::string str);
public:
    std::string get_first_name(int i);
    std::string get_last_name(int i);
    std::string get_nickname(int i);
    std::string get_phone_number(int i);
    std::string get_darkest_secret(int i);
    void set_contact(Contact new_contact, int i);
    void search();
};

#endif