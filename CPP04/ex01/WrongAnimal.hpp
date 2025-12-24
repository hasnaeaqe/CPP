#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

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
        virtual ~WrongAnimal();

        std::string getType() const;
        void makeSound() const;
};


#endif