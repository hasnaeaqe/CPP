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

    std::cout << "\n=== array test ===" << std::endl;
    int size = 10;
    Animal* tab[size];
    
    for (int i = 0; i < size; i++)
    {
        if (i < size / 2)
            tab[i] = new Dog();
        else
            tab[i] = new Cat();
    }
    std::cout<<"\n";
    for (int i = 0; i < size; i++)
    {
        delete tab[i];
    }

    std::cout<<"\n\n=======dog test(deepcopy)========"<<std::endl;
    Dog* dogorg = new Dog();
    dogorg->setBrainIdea(0,"for original");
    Dog* dogcopie = new Dog(*dogorg);
    dogcopie->setBrainIdea(0,"for copie");

    if (dogorg->getBrainIdea(0) != dogcopie->getBrainIdea(0))
            std::cout << "dog deep copy works" << std::endl;
    std::cout<<"\n\n=======delete========"<<std::endl;
    delete dogorg;
    delete dogcopie;


    std::cout<<"\n\n=======cat test========"<<std::endl;
    Cat* Catorg = new Cat();
    Cat* Catcopie = new Cat(*Catorg);

    std::cout<<"\n\n=======delete========"<<std::endl;
    delete Catorg;
    delete Catcopie;


    return 0;
}
