#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal& autre);
        WrongAnimal& operator=(const WrongAnimal& autre);
        ~WrongAnimal();

        std::string getType() const;
        void makeSound() const;
};


#endif