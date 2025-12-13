#include " ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name, 100, 50, 20){std::cout<<"ScavTrap constructor called"<<std::endl;}


ScavTrap::ScavTrap(){std::cout<<"ScavTrap's Default Constructor Called"<<std::endl;}

ScavTrap::ScavTrap(const ScavTrap& autre):ClapTrap(autre)
{
    std::cout<<"ScavTrap's Copy Constructor Called"<<std::endl;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& autre)
{
    std::cout<<"ScavTrap's copy assignement operator Called"<<std::endl;
    if (this != &autre)
        ClapTrap::operator=(autre);
    return (*this);
}
ScavTrap::~ScavTrap(){ std::cout<<"ScavTrap's Destructor Called"<<std::endl; }


void ScavTrap::attack(const std::string& target)
{
    ClapTrap::attack(target);
    std::cout<<"ScavTrap "<<std::endl;
    
}
 