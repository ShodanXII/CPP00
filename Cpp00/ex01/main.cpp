#include "PhoneBook.hpp"
#include <cstdlib>

Contact contact;
PhoneBook phonebook;

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

void displayError(const std::string& message)
{
    std::cout << "Error: " << message << '\n';
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

std::string getNonEmptyInput(const std::string& prompt)
{
    std::string input;
    while (true)
    {
        std::cout << prompt << '\n';
        if (!std::getline(std::cin, input))
            exit(1);
        if (isEmptyOrWhitespace(input))
        {
            displayError("Input cannot be empty or only whitespace.");
            continue;
        }
        return input;
    }
}

void search()
{
    phonebook.search();
}

void add(int i)
{
    contact.Set_FirstName(getNonEmptyInput("Enter your First Name!"));
    contact.Set_Last_Name(getNonEmptyInput("Enter your Last Name!"));
    contact.Set_Nickname(getNonEmptyInput("Enter your Nickname!"));

    std::string number;
    while (true)
    {
        number = getNonEmptyInput("Enter your Number!");
        if (isValidPhoneNumber(number))
            break;
        displayError("Invalid number. Please enter digits only.");
    }
    contact.Set_phoneNumber(number);
    contact.Set_DarkestSecret(getNonEmptyInput("Enter the Darkest Secret!"));
    phonebook.set_contact(contact, i);
    std::cout << "Contact added successfully!" << '\n';
}

int inp_treater(std::string input, int& i)
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
        i = (i + 1) % 8;
        return 1;
    }
    return -1;
}

int main()
{
    std::string input;
    int i = 0;
    while(25)
    {
        std::cout << "ENTER ONE OF THIS COMMANDS (ADD, SEARCH, EXIT)!" << "\n";
        if(!(std::getline(std::cin,input)))
            exit(1);
        if(inp_treater(input, i) == -1)
            continue;        
    }
}