#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{   
    std::cout<<"Dog's Default constructor called"<<std::endl;
    this->brain = new Brain();
}

Dog::Dog(const Dog& autre): Animal(autre)
{
    std::cout<<"Dog's copy constructor called"<<std::endl;
    brain = new Brain(*autre.brain);

}
Dog& Dog::operator=(const Dog& autre)
{
    std::cout<<"Dog's copy assignment operator  called"<<std::endl;
    if (this != &autre)
    {
        Animal::operator=(autre);
        delete brain;
        brain = new Brain(*autre.brain);
    }
    return (*this);
}

void Dog::makeSound() const
{
   std::cout<<"Dog makes Woof! Woof! ..."<<std::endl; 
}

void Dog::setBrainIdea(int index, const std::string& idea)
{
    if (brain)
       brain->setIdea(index, idea);
}
std::string Dog::getBrainIdea(int index) const
{
    if (brain)
        return brain->getIdea(index);
    return "";
}


Dog::~Dog()
{
    delete brain;
    std::cout<<"Dog's destructor called"<<std::endl;
}
