#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat:public Animal
{
    private:
        std::string name;
    public:
        Cat();
        Cat(const Cat& autre);
        Cat& operator=(const Cat& autre);
        ~Cat();
};


#endif