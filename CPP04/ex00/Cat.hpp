#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat:public Animal
{
    public:
        Cat();
        Cat(const Cat& autre);
        Cat& operator=(const Cat& autre);
        virtual ~Cat();

        virtual void makeSound() const;

};


#endif