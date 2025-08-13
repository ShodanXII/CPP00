#include <iostream>
#include <cctype>  // for isalpha

void print(char c)
{
    if (isalpha(c)) {
        
        std::cout << (char)toupper(c);
    } else {
        std::cout << c;
    }
}

int main(int ac, char **av)
{
    int j;
    std::string string;
    if(ac < 2){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    for (int i = 1; i < ac; i++)
    {
        string = av[i];
        j = 0;
        while (string[j])
        {
            print(string[j]);
            j++;
        }
    }
    std::cout << "\n";
}