#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog:public Animal
{
    private:
        std::string name;
    public:
        Dog();
        Dog(const Dog& autre);
        Dog& operator=(const Dog& autre);
        ~Dog();

        virtual void makeSound() const;
        
};


#endif