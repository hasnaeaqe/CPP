#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{   
    std::cout<<"Dog's Default constructor called"<<std::endl;
}

Dog::Dog(const Dog& autre): Animal(autre)
{
    std::cout<<"Dog's copy constructor called"<<std::endl;
}
Dog& Dog::operator=(const Dog& autre)
{
    std::cout<<"Dog's copy assignement operator  called"<<std::endl;
    if (this != &autre)
        Animal::operator=(autre);
    return (*this);
}

void Dog::makeSound() const
{
   std::cout<<"Dog makes Woof! Woof!..."<<std::endl; 
}

Dog::~Dog(){std::cout<<"Dog's destructor called"<<std::endl;}
