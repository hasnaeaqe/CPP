#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{   
    std::cout<<"Dog's Default constructer called"<<std::endl;
    name = "Dog1";
    this->brain = new Brain();
}

Dog::Dog(const Dog& autre): Animal(autre)
{
    std::cout<<"Dog's copy constructer called"<<std::endl;
    name = autre.name;
}
Dog& Dog::operator=(const Dog& autre)
{
    std::cout<<"Dog's copy assignement operator  called"<<std::endl;
    if (this != &autre)
    {
        Animal::operator=(autre);
        name = autre.name;
    }
    return (*this);
}

Dog::~Dog(){std::cout<<"Dog's destructor called"<<std::endl;}

void Dog::makeSound() const
{
   std::cout<<"Dog make ..."<<std::endl; 
}