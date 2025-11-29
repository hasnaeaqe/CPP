#include "PhoneBook.hpp"

int main()
{
    std::string input;
    PhoneBook phone;
    while(true)
    {
        std::cout <<"Enter a command (ADD, SEARCH, EXIT):"<<std::endl;
        if (!std::getline(std::cin, input))
            break ;
        if (input== "ADD")
            phone.add();
        if (input== "SEARCH")
            phone.search();
        if (input== "EXIT")
        {
            phone.exit();
            break;
        }
    }
}