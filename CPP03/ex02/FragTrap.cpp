#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap("default")
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout<<"FragTrap's Default Constructor Called for "<<name<<std::endl;
}
FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout<<"FragTrap constructor called for "<<name<<std::endl;
}

FragTrap::FragTrap(const FragTrap& autre):ClapTrap(autre)
{
    std::cout<<"FragTrap's Copy Constructor Called for "<<name<<std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap& autre)
{
    std::cout<<"FragTrap's copy assignement operator Called for "<<name<<std::endl;
    if (this != &autre)
        ClapTrap::operator=(autre);
    return (*this);
}
FragTrap::~FragTrap(){ std::cout<<"FragTrap's Destructor Called for "<<name<<std::endl; }


void FragTrap::highFivesGuys()
{ std::cout <<"FragTrap "<<name<<" requests a positive high five!"<<std::endl;}
 