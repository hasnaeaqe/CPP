#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("hasnae");
    ClapTrap b("abc");
    
    a.attack("abc");
    b.takeDamage(3);
    
    b.beRepaired(9);

    return 0;
}