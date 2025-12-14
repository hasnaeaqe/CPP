#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name, 100, 100, 30){std::cout<<"FragTrap constructor called"<<std::endl;}

FragTrap::FragTrap():ClapTrap("", 100, 100, 30){std::cout<<"FragTrap's Default Constructor Called"<<std::endl;}

FragTrap::FragTrap(const FragTrap& autre):ClapTrap(autre)
{
    std::cout<<"FragTrap's Copy Constructor Called"<<std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap& autre)
{
    std::cout<<"FragTrap's copy assignement operator Called"<<std::endl;
    if (this != &autre)
        ClapTrap::operator=(autre);
    return (*this);
}
FragTrap::~FragTrap(){ std::cout<<"FragTrap's Destructor Called"<<std::endl; }


void FragTrap::highFivesGuys()
{ std::cout <<"FragTrap"<<name<<" requests a positive high five!"<<std::endl;}
 