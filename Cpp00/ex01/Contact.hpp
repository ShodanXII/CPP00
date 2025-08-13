#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>

class Contact
{
    std::string darkest_secret;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
public:
    std::string GetFirstname();
    std::string GetLastName();
    std::string GetNickname();
    std::string GetPhoneNumber();
    std::string GetDarkestSecret();
    void Set_phoneNumber(std::string value);
    void Set_FirstName(std::string value);
    void Set_Nickname(std::string value);
    void Set_Last_Name(std::string value);
    void Set_DarkestSecret(std::string value);
};

#endif