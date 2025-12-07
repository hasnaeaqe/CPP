#include "Harl.hpp"


int main()
{
    Harl harl;
    
    std::cout << "=== Test DEBUG ===" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;
    
    std::cout << "=== Test INFO ===" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;
    
    std::cout << "=== Test WARNING ===" << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;
    
    std::cout << "=== Test ERROR ===" << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl;
    
    std::cout << "=== Test invalide ===" << std::endl;
    harl.complain("RANDOM");
    
    return 0;
}