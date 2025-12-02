#ifndef Weapon_HPP
#define Weapon_HPP

#include <iostream>

class Weapon{
    private:
        std::string type;
    public:
        Weapon();
        Weapon(std::string type);
        const std::string& getType() const;
        void setType(std::string type);
        ~Weapon();

};

#endif