#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap("", 100, 50, 20)
{std::cout<<"ScavTrap's Default Constructor Called for "<<name<<std::endl;}

ScavTrap::ScavTrap(std::string name):ClapTrap(name, 100, 50, 20)
{std::cout<<"ScavTrap constructor params called for "<<name<<std::endl;}

ScavTrap::ScavTrap(const ScavTrap& autre):ClapTrap(autre)
{std::cout<<"ScavTrap's Copy Constructor Called for "<<name<<std::endl;}

ScavTrap& ScavTrap::operator=(const ScavTrap& autre)
{
    std::cout<<"ScavTrap's copy assignement operator Called"<<std::endl;
    if (this != &autre)
        ClapTrap::operator=(autre);
    return (*this);
}

ScavTrap::~ScavTrap(){ std::cout<<"ScavTrap's Destructor Called for "<<name<<std::endl; }

void ScavTrap::attack(const std::string& target)
{
    if (hitPoints == 0)
    {
        std::cout<<"ScavTrap "<<name<<" is destroyed and Can't attack!"<<std::endl;
        return ;
    }
    if (energyPoints == 0)
    {
        std::cout<<"ScavTrap "<<name<<" has no energy points left and Can't attack! "<<std::endl;
        return ;
    }
    energyPoints--;
    std::cout<<"ScavTrap "<<name<<" attacks "<<target<<", causing "<<attackDamage<<" points of damage!"<<std::endl;
}
void ScavTrap::guardGate()
{ std::cout <<"ScavTrap "<<name<<" is now in Gate keeper mode."<<std::endl;}
 