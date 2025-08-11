#include "PhoneBook.hpp"

Contact contact;

void displayError(const std::string& message)
{
    std::cout << "Error: " << message << std::endl;
}

bool isValidPhoneNumber(const std::string& number)
{
    if (number.empty())
        return false;
    
    for (size_t i = 0; i < number.length(); i++)
    {
        if (!isdigit(number[i]))
            return false;
    }
    return true;
}

bool isEmptyOrWhitespace(const std::string& str)
{
    if (str.empty())
        return true;
    
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ' && str[i] != '\t')
            return false;
    }
    return true;
}

void e_xit(){exit(1);}

void search()
{

}

void add(int i)
{
    std::string input;
    PhoneBook	phonebook;
    if(i == 7)
        i = 0;
    std::cout << "Enter your First Name !" << std::endl;
    if(!(std::getline(std::cin, input)))
        exit (1);
    contact.Set_FirstName(input);
    std::cout << "Enter your Last Name !" << std::endl;
    if(!(std::getline(std::cin, input)))
        exit (1);
    contact.Set_Last_Name(input);
    std::cout << "Enter your Nickname !" << std::endl;
    if(!(std::getline(std::cin, input)))
        exit (1);
    contact.Set_Nickname(input);
    std::cout << "Enter your Number !" << std::endl;
    if((!std::getline(std::cin,input)))
        exit(1);
    valid_number(input);
    contact.Set_phoneNumber(input);
}

int inp_treater(std::string input, int i)
{
    if(input == "EXIT"){
            e_xit();
            return 1;
    }
    else if(input == "SEARCH"){
        search();
        return 1;
    }
    else if(input == "ADD"){
        add(i);
        return 1;
    }
    return -1;
}

int main()
{
    Contact Contact;
    std::string input;
    int i = 0;
    while(25)
    {
        std::cout << "ENTER ONE OF THIS COMMANDS (ADD, SEARCH, EXIT)!" << std::endl;
        if(!(std::getline(std::cin,input)))
            exit(1);
        if(inp_treater(input, i) == -1)
            continue;        
    }
}