#include "ScavTrap.hpp"

int main()
{
    std::cout << "\n=== Creating ScavTrap ===" << std::endl;
    ScavTrap guard("Hasnae");
    
    std::cout << "\n=== Testing attack ===" << std::endl;
    guard.attack("Guard");
    
    std::cout << "\n=== Testing sguardGate ===" << std::endl;
    guard.guardGate();
    
    std::cout << "\n=== Testing copy ===" << std::endl;
    ScavTrap copy(guard);
    
    std::cout << "\n=== End of scope (destructors called) ===" << std::endl;
    return 0;
}