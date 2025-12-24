#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;
    delete i;
    
    Animal *tab[2];
    tab[0] = new Dog();
    tab[1] = new Cat();

    for (int i = 0; i<2; i++)
    {
        delete tab[i];
    }
    
    return 0;
   
}
