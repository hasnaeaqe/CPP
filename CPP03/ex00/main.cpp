#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("hasnae");
    ClapTrap b("abc");
    
    a.setAttackDamage(10);
    a.attack("abc");
    b.takeDamage(3);
    
    b.beRepaired(9);
//     ClapTrap robot3("Terminator");
//    for (int i = 0; i < 12; i++) {
//        robot3.attack("Target");
//    }
    
}