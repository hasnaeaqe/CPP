#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{   
    std::cout<<"WrongCat's Default constructer called"<<std::endl;
}

WrongCat::WrongCat(const WrongCat& autre): WrongAnimal(autre)
{
    std::cout<<"WrongCat's copy constructer called"<<std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& autre)
{
    std::cout<<"WrongCat's copy assignement operator  called"<<std::endl;
    if (this != &autre)
    {
        WrongAnimal::operator=(autre);
    }
    return (*this);
}

void WrongCat::makeSound() const
{
   std::cout<<"Wrong cat makes a wrong sound"<<std::endl; 
}

WrongCat::~WrongCat(){std::cout<<"WrongCat's destructor called"<<std::endl;}
