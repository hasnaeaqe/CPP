#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{   
    std::cout<<"Cat's Default constructor called"<<std::endl;
    name = "CAT1";
    brain = new Brain();
}

Cat::Cat(const Cat& autre): Animal(autre)
{
    std::cout<<"Cat's copy constructor called"<<std::endl;
    name = autre.name;
    brain = new Brain(*autre.brain);

}
Cat& Cat::operator=(const Cat& autre)
{
    std::cout<<"Cat's constructor copy assignmentoperator  called"<<std::endl;
    if (this != &autre)
    {
        Animal::operator=(autre);
        name = autre.name;
        delete brain;
        brain = new Brain(*autre.brain);
    }
    return (*this);
}

void Cat::makeSound() const
{
   std::cout<<"Cat makes Meow! Meow! ..."<<std::endl; 
}

Cat::~Cat()
{
    delete brain;
    std::cout<<"Cat's destructor called"<<std::endl;
}

