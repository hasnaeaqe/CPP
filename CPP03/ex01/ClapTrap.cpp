#include "ClapTrap.hpp"


ClapTrap::ClapTrap():hitPoints(10),energyPoints(10), attackDamage(0){ std::cout<<"Default Constructor Called"<<std::endl;}
ClapTrap::ClapTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage):name(name),hitPoints(hitPoints),energyPoints(energyPoints), attackDamage(attackDamage)
{ std::cout<<"Constructor with params Called"<<std::endl;}
ClapTrap::ClapTrap(const ClapTrap& autre)
{
    std::cout<<"Copy Constructor Called"<<std::endl;
    hitPoints = autre.hitPoints;
    energyPoints = autre.energyPoints;
    attackDamage = autre.attackDamage;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& autre)
{
    std::cout<<"copy assignement operator Called"<<std::endl;
    if (this != &autre)
    {
        hitPoints = autre.hitPoints;
        energyPoints = autre.energyPoints;
        attackDamage = autre.attackDamage;
    }
    return (*this);
}
ClapTrap::~ClapTrap(){ std::cout<<"Destructor Called"<<std::endl; }


unsigned int ClapTrap::getAttackDamage() const {return (attackDamage);}
void ClapTrap::setAttackDamage(unsigned int attackDamage){ this->attackDamage = attackDamage;}


void ClapTrap::attack(const std::string& target)
{
    if (hitPoints <= 0 || energyPoints <= 0)
        std::cout<<"Can't attack"<<std::endl;
    else
    {
        energyPoints--;
        std::cout<<"ClapTrap "<<name<<" attacks "<<target<<" causing "<<attackDamage<<" points of damage!"<<std::endl;
    }
    
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount <= hitPoints)
        hitPoints = hitPoints - amount;
    else
    {
        hitPoints = 0;
        std::cout<<"the ClapTrap die"<<std::endl;
    }
    std::cout<<"ClapTrap "<<name<<" takes "<<amount<<" damage "<<std::endl;

}
void ClapTrap::beRepaired(unsigned int amount)
{
     if (hitPoints <= 0 || energyPoints <= 0)
        std::cout<<"Can't be repaired"<<std::endl;
    hitPoints = hitPoints + amount;
    if(energyPoints > 0)
        energyPoints--;
    std::cout<<"ClapTrap "<<name<<" repairs itself for "<<amount<<" hitPoints"<<std::endl;

}