#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("ana");
    ScavTrap b("u");

    a.setAttackDamage(10);
    a.attack("B");
    b.takeDamage(a.getAttackDamage());

    b.beRepaired(11);

    a.guardGate();

}