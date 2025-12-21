#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // const Animal* meta = new Animal();  //abstract
    Animal *tab[10];
    for (int i=0; i<5; i++)
    {
        tab[i] = new Dog();

    }
    for (int i=5; i<10; i++)
    {
        tab[i] = new Cat();

    }
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // delete j;//should not create a leak
    // delete i;
    // // ...
    Dog* dogorg = new Dog();
    Dog* dogcopie = new Dog(*dogorg);

    delete dogorg;
    delete dogcopie;


    for (int i=0; i<10;i++)
    {
        delete tab[i];

    }
    return 0;
}
