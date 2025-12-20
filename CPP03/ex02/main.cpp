#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "\n===== TEST CLAPTRAP =====" << std::endl;
    ClapTrap clap("hasnae");
    clap.attack("Targuuet");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n===== TEST SCAVTRAP =====" << std::endl;
    ScavTrap s("SCAV");
    ScavTrap p("Trap");

    s.attack("P");
    p.takeDamage(40);
    p.beRepaired(15);
    s.guardGate();

    std::cout << "\n===== TEST FRAGTRAP =====" << std::endl;
    FragTrap f("fatiha");
    FragTrap ABC("imane");

    f.attack("ABC");
    ABC.takeDamage(30);
    ABC.beRepaired(10);
    
    f.highFivesGuys();

    FragTrap ab(f);

    return 0;
}