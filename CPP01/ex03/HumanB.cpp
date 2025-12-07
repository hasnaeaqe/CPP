#include "HumanB.hpp"

HumanB::HumanB(std::string name) :weapon(NULL), name(name){}

HumanB::~HumanB()
{
    std::cout<<name<<" HumanB destroyed"<<std::endl;
}

void HumanB::attack()
{
    if(weapon)
        std::cout<<name<<"  attacks with their "<<weapon->getType()<<std::endl;
    else
        std::cout<<"Weapon don't exist"<<std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}