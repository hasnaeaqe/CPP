#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b;

    a.setAttackDamage(10);
    a.attack("B");
    b.takeDamage(a.getAttackDamage());

}