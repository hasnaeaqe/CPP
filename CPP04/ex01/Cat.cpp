#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{   
    std::cout<<"Cat's Default constructor called"<<std::endl;
    brain = new Brain();
}

Cat::Cat(const Cat& autre): Animal(autre)
{
    std::cout<<"Cat's copy constructor called"<<std::endl;
    brain = new Brain(*autre.brain);

}
Cat& Cat::operator=(const Cat& autre)
{
    std::cout<<"Cat's copy assignment operator  called"<<std::endl;
    if (this != &autre)
    {
        Animal::operator=(autre);
        delete brain;
        brain = new Brain(*autre.brain);
    }
    return (*this);
}

void Cat::makeSound() const
{
   std::cout<<"Cat makes Meow! Meow! ..."<<std::endl; 
}

void Cat::setBrainIdea(int index, const std::string& idea)
{
    if (brain)
       brain->setIdea(index, idea);
}
std::string Cat::getBrainIdea(int index) const
{
    if (brain)
        return brain->getIdea(index);
    return "";
}

Cat::~Cat()
{
    delete brain;
    std::cout<<"Cat's destructor called"<<std::endl;
}
