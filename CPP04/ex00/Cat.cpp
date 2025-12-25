#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{   
    std::cout<<"Cat's Default constructor called"<<std::endl;
}

Cat::Cat(const Cat& autre): Animal(autre)
{
    std::cout<<"Cat's copy constructor called"<<std::endl;
}
Cat& Cat::operator=(const Cat& autre)
{
    std::cout<<"Cat's copy assignement operator  called"<<std::endl;
    if (this != &autre)
        Animal::operator=(autre);
    return (*this);
}

void Cat::makeSound() const
{
   std::cout<<"Cat makes Meow! Meow! ..."<<std::endl; 
}

Cat::~Cat(){ std::cout<<"Cat's destructor called"<<std::endl; }

