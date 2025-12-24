#include "Brain.hpp"


Brain::Brain()
{
    std::cout<<"Brain's constructor called"<<std::endl;
    for(int i=0; i<100; i++)
        this->ideas[i] = ""; 
}

Brain::Brain(const Brain& autre)
{
    std::cout<<"Brain's copy constructor called"<<std::endl;
    for(int i=0; i<100; i++)
        this->ideas[i] = autre.ideas[i];
}

Brain& Brain::operator=(const Brain& autre)
{
    std::cout<<"Brain's copy assignment operator called"<<std::endl;
    if (this != &autre)
    {
        for(int i=0; i<100; i++)
            this->ideas[i] = autre.ideas[i];
    }
    return (*this);
}

void Brain::setIdea(int index, const std::string& idea)
{
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}
std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return (ideas[index]);
    return "";
}

Brain::~Brain() { std::cout<<"Brain's destructor called"<<std::endl; }

