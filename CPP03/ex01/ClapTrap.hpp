#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
    private:
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;
    public:
        ClapTrap();
        ClapTrap(const ClapTrap& autre);
        ClapTrap& operator=(ClapTrap& autre);
        ~ClapTrap();
        
        unsigned int getAttackDamage() const;
        void setAttackDamage(unsigned int attackDamage);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
#endif