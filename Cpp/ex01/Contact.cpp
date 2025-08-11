#include "Contact.hpp"

std::string Contact::GetPhoneNumber(){return (phone_number);}
std::string Contact::GetFirstname(){return (first_name);}
std::string Contact::GetLastName(){return (last_name);}
std::string Contact::GetNickname(){return (nickname);}
std::string Contact::GetDarkestSecret(){return (darkest_secret);}

void	Contact::Set_phoneNumber(std::string value)
{
	this->phone_number = value;
}

void	Contact::Set_FirstName(std::string value)
{
	this->first_name = value;
}

void	Contact::Set_Last_Name(std::string value)
{
	this->last_name = value;
}

void	Contact::Set_Nickname(std::string value)
{
	this->nickname = value;
}

void	Contact::Set_DarkestSecret(std::string value)
{
	this->darkest_secret = value;
}