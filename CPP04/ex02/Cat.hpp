#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Cat:public Animal
{
    private:
        std::string name;
        Brain* brain;
    public:
        Cat();
        Cat(const Cat& autre);
        Cat& operator=(const Cat& autre);
        ~Cat();

        virtual void makeSound() const ;

};


#endif