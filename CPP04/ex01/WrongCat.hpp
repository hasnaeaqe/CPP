#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat& autre);
        WrongCat& operator=(const WrongCat& autre);
        ~WrongCat();
        
        void makeSound() const;
};


#endif