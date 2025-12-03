#include "Zombie.hpp"


int main()
{
    int n = 2;
    std::string name="hasnae";
    Zombie *Horde = zombieHorde(n, name);
    if (!Horde)
        return (1);
    
    std::cout <<"--annonce--"<<std::endl;

    for(int i=0; i<n; i++)
    {
        Horde[i].announce();
    }

    std::cout <<"--destroying--"<<std::endl;
    delete[] Horde;

    return (0);
}