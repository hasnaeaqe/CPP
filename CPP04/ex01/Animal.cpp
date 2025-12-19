#include "Animal.hpp"

Animal::Animal():type("")
{std::cout<<"Animal's Default constructor called"<<std::endl;}
Animal::Animal(std::string type):type(type)
{std::cout<<"Animal's  constructor with params called"<<std::endl;}

Animal::Animal(const Animal& autre)
{
    std::cout<<"Animal's copy constructor called"<<std::endl;
    type = autre.type;
}
Animal& Animal::operator=(const Animal& autre)
{
    std::cout<<"Animal's constructor copy assignmentoperator  called"<<std::endl;
    if (this != &autre)
        type = autre.type;
    return (*this);
}

Animal::~Animal(){std::cout<<"Animal's destructor called"<<std::endl;}

std::string Animal::getType() const {return type;}

void Animal::makeSound() const
{
   std::cout<<"Animal make ..."<<std::endl; 
}