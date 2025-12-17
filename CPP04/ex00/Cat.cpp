#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{   
    std::cout<<"Cat's Default constructer called"<<std::endl;
    name = "CAT1";
}

Cat::Cat(const Cat& autre): Animal(autre)
{
    std::cout<<"Cat's copy constructer called"<<std::endl;
    name = autre.name;
}
Cat& Cat::operator=(const Cat& autre)
{
    std::cout<<"Cat's copy assignement operator  called"<<std::endl;
    if (this != &autre)
    {
        Animal::operator=(autre);
        name = autre.name;
    }
    return (*this);
}

Cat::~Cat(){std::cout<<"Cat's destructor called"<<std::endl;}


void Cat::makeSound() const
{
   std::cout<<"Cat make ..."<<std::endl; 
}