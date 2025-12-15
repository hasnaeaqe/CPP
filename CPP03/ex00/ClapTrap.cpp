#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name(""),hitPoints(10),energyPoints(10), attackDamage(0)
{ std::cout<<"ClapTrap's Default Constructor Called for "<<name<<std::endl;}

ClapTrap::ClapTrap(std::string name):name(name),hitPoints(10),energyPoints(10), attackDamage(0)
{ std::cout<<"ClapTrap's Constructor with params name Called for "<<name<<std::endl;}

ClapTrap::ClapTrap(const ClapTrap& autre)
{
    std::cout<<"ClapTrap's Copy Constructor Called"<<std::endl;
    name = autre.name;
    hitPoints = autre.hitPoints;
    energyPoints = autre.energyPoints;
    attackDamage = autre.attackDamage;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& autre)
{
    std::cout<<"ClapTrap's copy assignement operator Called for "<<name<<std::endl;
    if (this != &autre)
    {
        name = autre.name;
        hitPoints = autre.hitPoints;
        energyPoints = autre.energyPoints;
        attackDamage = autre.attackDamage;
    }
    return (*this);
}
ClapTrap::~ClapTrap(){ std::cout<<"ClapTrap's Destructor Called for "<< name<<std::endl; }


unsigned int ClapTrap::getAttackDamage() const {return (attackDamage);}
void ClapTrap::setAttackDamage(unsigned int attackDamage){ this->attackDamage = attackDamage;}


void ClapTrap::attack(const std::string& target)
{
    if (hitPoints == 0)
    {
        std::cout<<"ClapTrap "<<name<<" is destroyed and Can't attack!"<<std::endl;
        return ;
    }
    if (energyPoints == 0)
    {
        std::cout<<"ClapTrap "<<name<<" has no energy points left and Can't attack! "<<std::endl;
        return ;
    }
    energyPoints--;
    std::cout<<"ClapTrap "<<name<<" attacks "<<target<<", causing "<<attackDamage<<" points of damage!"<<std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout<<"ClapTrap "<<name<<" takes "<<amount<<" damage "<<std::endl;

    if (hitPoints == 0)
    {
        std::cout<<"ClapTrap "<<name<<" is already destroyed!"<<std::endl;
        return ;
    }
    if (amount >= hitPoints)
    {
        hitPoints = 0;
        std::cout<<"ClapTrap "<<name<<" has been destroyed!"<<std::endl;
        return ;
    }
    else
    {
        hitPoints -=   amount;
        std::cout<<"ClapTrap "<<name<<" now has "<<hitPoints<<" hit points left! "<<std::endl;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints == 0)
    {
        std::cout<<"ClapTrap "<<name<<" is destroyed and Can't be repaired!"<<std::endl;
        return ;
    }
    if (energyPoints == 0)
    {
        std::cout<<"ClapTrap "<<name<<" has no energy points left and Can't be repaired!"<<std::endl;
        return ;
    }
    hitPoints = hitPoints + amount;
    energyPoints--;
    std::cout<<"ClapTrap "<<name<<" repairs itself for "<<amount<<" hitPoints"<<std::endl;

}
