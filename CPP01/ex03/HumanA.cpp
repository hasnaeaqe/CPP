#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) :weapon(weapon) ,name(name){}

HumanA::~HumanA()
{
    std::cout<<name<<" HumanA destroyed"<<std::endl;
}

void HumanA::attack()
{
    std::cout<<name<<"  attacks with their "<<weapon.getType()<<std::endl;
}
