#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : countcontact(0){}

int NonPrintable(std::string& field)
{
    for (size_t i=0; i< field.length(); i++){
        if (!isprint(field[i]))
            return (1);
    }
    return (0);
}

int isIntegr(std::string& str)
{
    if (str.empty()) return 1;

    for(size_t k=0; k<str.length();k++)
    {
        if (!isdigit(str[k]))
            return 1;
    }
    return 0;
}
std::string format(std::string field)
{
    if (field.length() > 10)
        return (field.substr(0, 9) + '.');
    else
        return (std::string(10-field.length(), ' ') + field);
}

void PhoneBook::add()
{
    std::string input;
    int i = countcontact % 8;

    std::cout<<"enter your Firstname:"<<std::endl;
    if(!std::getline(std::cin, input))
            std::exit(1);
    while(input.empty()|| NonPrintable(input))
    {
        std::cout<<"field cannot be empty or contains non-printable characters! Enter your firstname :";
        if(!std::getline(std::cin, input))
            std::exit(1);
    }
    contacts[i].setFirstname(input);

    std::cout<<"enter your Lastname:"<<std::endl;
    if(!std::getline(std::cin, input))
            std::exit(1);
    while(input.empty()|| NonPrintable(input))
    {
        std::cout<<"field cannot be empty or contains non-printable characters! Enter your lastname:";
        if(!std::getline(std::cin, input))
            std::exit(1);
    }
    contacts[i].setLastname(input);

    std::cout<<"enter your Nickname:"<<std::endl;
    if(!std::getline(std::cin, input))
            std::exit(1);
    while(input.empty()|| NonPrintable(input))
    {
        std::cout<<"field cannot be empty or contains non-printable characters! Enter your Nickname:";
        if(!std::getline(std::cin, input))
            std::exit(1);
    }
    contacts[i].setNickname(input);


    std::cout<<"enter your Phonenumber:"<<std::endl;
    if(!std::getline(std::cin, input))
            std::exit(1);
    while(input.empty()|| NonPrintable(input) || isIntegr(input))
    {
        std::cout<<"field cannot be empty or contains non-printable characters! Enter your Phonenumber:";
        if(!std::getline(std::cin, input))
            std::exit(1);
    }
    contacts[i].setPhonenumber(input);

    std::cout<<"enter your DarkestSecret:"<<std::endl;
    if(!std::getline(std::cin, input))
        std::exit(1);
    while(input.empty() || NonPrintable(input))
    {
        std::cout<<"field cannot be empty or contains non-printable characters! Enter your DarkestSecret:";
        if(!std::getline(std::cin, input))
            std::exit(1);
    }
    contacts[i].setDarkestSecret(input);

    countcontact++;
    std::cout << "Contact added successfully!" << std::endl;
}


void PhoneBook::search()
{
    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    bool hasContacts = false;
    for(int i=0; i<8; i++)
    {
        if (!contacts[i].getFirstname().empty())
        {
            hasContacts = true;
            std::stringstream ss;
            ss << i;
            std::cout<<format(ss.str())<<"|";
            std::cout<<format(contacts[i].getFirstname())<<"|";
            std::cout<<format(contacts[i].getLastname())<<"|";
            std::cout<<format(contacts[i].getNickname())<<std::endl;
        }
    }
    if (!hasContacts)
    {
        std::cout<<"No contacts to display"<<std::endl;
        return ;
    }
    std::string i;
    int j=-1;
    bool validi=false;
    
    while (!validi)
    {
        std::cout<<"Enter an index to search:"<<std::endl;
        if(!std::getline(std::cin, i))
            std::exit(0);
        if (!i.empty() && !isIntegr(i))
        {
            j = atoi(i.c_str());
             if (j>=0 && j<8 && !contacts[j].getFirstname().empty())
                validi = true;
            else
            {
                std::cout<<"Invalid index or empty contact!"<<std::endl;
                return ;
            }
        }
        else
        {
            std::cout<<"Invalid index"<<std::endl;
            return ;
        }
    }
    std::cout<<"First name: "<<contacts[j].getFirstname()<<std::endl;
    std::cout<<"Last name: "<<contacts[j].getLastname()<<std::endl;
    std::cout<<"Nickname: "<<contacts[j].getNickname()<<std::endl;
    std::cout<<"Phone number: "<<contacts[j].getPhonenumber()<<std::endl;
    std::cout<<"Darkest secret:  "<<contacts[j].getDarkestSecret()<<std::endl;
}

void PhoneBook::exit()
{
    std::cout<<"Goodbye! contacts are lost forever!"<<std::endl;
}