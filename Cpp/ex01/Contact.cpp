#include <iostream>
#include <string>

class Contact
{
    std::string darkest_secre;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    int k;
    public:
    int lol(){
        return k;
    }
    void setters(int value)
    {
        if(value >= 10)
        {
            std::cout << "cant get it more then 10" << std::endl;
            return ;
        }
        else
            this->k = value;
    }
};

int main()
{
    Contact tt;
    // tt.lol = "lol";
    tt.setters(10);
    std::cout << tt.lol() << std::endl;
    tt.setters(3);
    std::cout << tt.lol() << std::endl;
}