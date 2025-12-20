#include "Weapon.hpp"

Weapon::Weapon() :type("default"){}
Weapon::Weapon(std::string type) :type(type){}

Weapon::~Weapon()
{
    std::cout<<type<<" destroyed"<<std::endl;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

const std::string& Weapon::getType() const
{
    return type;
}
  
  