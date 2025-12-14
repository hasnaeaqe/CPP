#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b;

    ScavTrap s("SCAV");
    ScavTrap p("Trap");

    s.setAttackDamage(6);
    s.attack("P");
    p.takeDamage(s.getAttackDamage());
    p.beRepaired(15);
    s.guardGate();

    FragTrap f("fatiha");
    FragTrap ABC("imane");

    f.attack("ABC");
    ABC.takeDamage(f.getAttackDamage());
    ABC.beRepaired(10);
    
    f.highFivesGuys();

    FragTrap ab(f);
    ab.operator=(f);

}