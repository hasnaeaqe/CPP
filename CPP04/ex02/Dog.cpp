#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{   
    std::cout<<"Dog's Default constructor called"<<std::endl;
    name = "Dog1";
    this->brain = new Brain();
}

Dog::Dog(const Dog& autre): Animal(autre)
{
    std::cout<<"Dog's copy constructor called"<<std::endl;
    name = autre.name;
    brain = new Brain(*autre.brain);

}
Dog& Dog::operator=(const Dog& autre)
{
    std::cout<<"Dog's copy assignmentoperator  called"<<std::endl;
    if (this != &autre)
    {
        Animal::operator=(autre);
        name = autre.name;
        delete brain;
        brain = new Brain(*autre.brain);
    }
    return (*this);
}

void Dog::makeSound() const
{
   std::cout<<"Dog maked Woof! Woof! ..."<<std::endl; 
}

Dog::~Dog()
{
    delete brain;
    std::cout<<"Dog's destructor called"<<std::endl;
}
