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
    if(ac < 2){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    for (int i = 1; av[i]; i++)
    {
        j = 0;
        while (av[i][j])
        {
            print(av[i][j]);
            j++;
        }
    }
    std::cout << "\n";
}