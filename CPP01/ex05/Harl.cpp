#include "Harl.hpp"

void Harl::debug()
{
    std::cout<<"DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
}

void Harl::info()
{
    std::cout<<"INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void Harl::warning()
{
    std::cout<<"WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."<<std::endl;
}
void Harl::error()
{
    std::cout<<"ERROR: This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void Harl:: complain(std::string level)
{
    std::string name[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void(Harl::*fcts[4])()={&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    int index = -1;
    for(int i=0;i<4;i++)
    {
        if (name[i] == level)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return ;
    }
    for (int i=index;i<4;i++)
    {
        (this->*fcts[i])();
    }
}