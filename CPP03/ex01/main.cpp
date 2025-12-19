#include "ScavTrap.hpp"

int main()
{
    std::cout << "===== TEST CLAPTRAP =====" << std::endl;
    ClapTrap clap("hasnae");
    clap.attack("Targuuet");
    clap.takeDamage(5);
    clap.beRepaired(3);
    
    std::cout << "\n===== TEST SCAVTRAP =====" << std::endl;
    std::cout << "\n=== Creating ScavTrap ===" << std::endl;
    ScavTrap guard("Hasnae");
    
    std::cout << "\n=== Testing attack ===" << std::endl;
    guard.attack("Guard");
    
    std::cout << "\n=== Testing sguardGate ===" << std::endl;
    guard.guardGate();
    
    std::cout << "\n=== Testing copy ===" << std::endl;
    ScavTrap copy(guard);
    
    return 0;
}