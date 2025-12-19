#include "Brain.hpp"


Brain::Brain()
{std::cout<<"Brain's destructor called"<<std::endl;}

Brain::Brain(const Brain& autre)
{
    std::cout<<"Brain's copy constructer called"<<std::endl;
    this->ideas[100] = autre.ideas[100];
}

Brain& Brain::operator=(const Brain& autre)
{
    std::cout<<"Brain's copy constructer called"<<std::endl;
    if (this != &autre)
        this->ideas[100] = autre.ideas[100];
}

Brain::~Brain(){std::cout<<"Brain's destructor called"<<std::endl; }

