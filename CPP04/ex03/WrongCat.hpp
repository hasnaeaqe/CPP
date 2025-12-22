#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal
{
    private:
        std::string name;
    public:
        WrongCat();
        WrongCat(const WrongCat& autre);
        WrongCat& operator=(const WrongCat& autre);
        ~WrongCat();
        
        void makeSound() const;
};


#endif