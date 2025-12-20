#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("default")
{
    std::cout<<"WrongAnimal's Default constructer called"<<std::endl;
}

WrongAnimal::WrongAnimal(std::string type):type(type)
{
    std::cout<<"WrongAnimal's  constructer with params called"<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& autre)
{
    std::cout<<"WrongAnimal's copy constructer called"<<std::endl;
    type = autre.type;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& autre)
{
    std::cout<<"WrongAnimal's copy assignement operator  called"<<std::endl;
    if (this != &autre)
        type = autre.type;
    return (*this);
}

std::string WrongAnimal::getType() const {return type;}

void WrongAnimal::makeSound() const
{
   std::cout<<"Wrong animal makes a wrong sound"<<std::endl; 
}

WrongAnimal::~WrongAnimal(){std::cout<<"WrongAnimal's destructor called"<<std::endl;}

