#include "PhoneBook.hpp"

void	PhoneBook::print_contact(int i)
{
	std::cout << "First Name    : " << get_first_name(i) << std::endl;
	std::cout << "Last Name     : " << get_last_name(i) << std::endl;
	std::cout << "Nickname      : " << get_nickname(i) << std::endl;
	std::cout << "Phone Number  : " << get_phone_number(i) << std::endl;
	std::cout << "Darkest Secret: " << get_darkest_secret(i) << std::endl;
}

void	PhoneBook::search()
{
	int			index;
	int			count;

	std::cout << "+----------+----------+----------+----------+" << std::endl;
    std::cout << "|     index|first name|  lastname|  nickname|" << std::endl;
    std::cout << "+----------+----------+----------+----------+" << std::endl;
	count = 0;
	for(int i = 0; i < 8; i++)
	{
		if (!get_first_name(i).empty())
		{
			std::cout << "|         " << i << "|";
			std::cout << align_col(get_first_name(i)) << "|";
			std::cout << align_col(get_last_name(i)) << "|";
			std::cout << align_col(get_nickname(i)) << "|" << std::endl;
			count++;
		}
	}
	if (count != 0)
	{
		std::cout << "+----------+----------+----------+----------+" << std::endl;
		while (1)
		{
			std::cout << "Enter the index of the contact to display more information: ";
			std::cin >> index;
			if (std::cin.eof())
			{
				std::cout << "eof detected, Exiting..." << std::endl;
				exit(0);
			}
			if (std::cin.fail() || index < 0 || index >= count)
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Invalid index, try with a valid one\n";
			}
			else
				break ;
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		print_contact(index);
	}
}

std::string PhoneBook::get_first_name(int i)
{
    return contact[i].GetFirstname();
}

std::string PhoneBook::get_last_name(int i)
{
    return contact[i].GetLastName();
}

std::string PhoneBook::get_nickname(int i)
{
    return contact[i].GetNickname();
}

std::string PhoneBook::get_phone_number(int i)
{
    return contact[i].GetPhoneNumber();
}

std::string PhoneBook::get_darkest_secret(int i)
{
    return contact[i].GetDarkestSecret();
}

void PhoneBook::set_contact(Contact new_contact, int i)
{
    contact[i] = new_contact;
}

std::string PhoneBook::align_col(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    else
    {
        std::string aligned = str;
        while (aligned.length() < 10)
            aligned = " " + aligned;
        return aligned;
    }
}
