#include "Animal.hpp"

Animal::Animal():type("default")
{
    std::cout<<"Animal's Default constructor called"<<std::endl;
}
Animal::Animal(std::string type):type(type)
{
    std::cout<<"Animal's  constructor with params called"<<std::endl;
}

Animal::Animal(const Animal& autre):type(autre.type)
{
    std::cout<<"Animal's copy constructor called"<<std::endl;
}
Animal& Animal::operator=(const Animal& autre)
{
    std::cout<<"Animal's copy assignement operator  called"<<std::endl;
    if (this != &autre)
        type = autre.type;
    return (*this);
}

std::string Animal::getType() const  {return type;}

Animal::~Animal() {std::cout<<"Animal's destructor called"<<std::endl;}
