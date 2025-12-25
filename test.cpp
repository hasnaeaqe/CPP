// #include <iostream>
// #include <cstring>

// class TraceAnimal {
//     char* nom;
    
// public:
//     TraceAnimal(const char* n) {
//         nom = new char[strlen(n) + 1];
//         strcpy(nom, n);
//         std::cout << "Constructeur: " << nom << " @" << (void*)nom << std::endl;
//     }
    
//     ~TraceAnimal() {
//         std::cout << "Destructeur: " << nom << " @" << (void*)nom << std::endl;
//         delete[] nom;
//     }
    
//     // Version DANGEREUSE sans check
//     TraceAnimal& operator=(const TraceAnimal& autre) {
//         std::cout << "\noperator= SANS check:" << std::endl;
//         std::cout << "  this->nom = '" << nom << "' @" << (void*)nom << std::endl;
//         std::cout << "  autre.nom = '" << autre.nom << "' @" << (void*)autre.nom << std::endl;
        
//         delete[] nom;
//         std::cout << "  Apres delete[]" << std::endl;
        
//         nom = new char[strlen(autre.nom) + 1];  // DANGER si auto-affectation!
//         strcpy(nom, autre.nom);
        
//         std::cout << "  Apres copie, nom = '--->" << nom << "<---' @" << (void*)nom << std::endl;
//         return *this;
//     }
// };

// int main() {
//     std::cout << "=== AUTO-AFFECTATION SANS CHECK ===" << std::endl;
//     TraceAnimal a("Felix");
    
//     std::cout << "\nAvant auto-affectation a = a" << std::endl;
//     a = a;  // COMPORTEMENT INDÉFINI !
    
//     std::cout << "\nSi on arrive ici, c'est par chance..." << std::endl;
//     return 0;
// }


#include <iostream>
#include <string>

int main() {
    // Test avec des tableaux simples :
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    
    // b = a;  // ❌ ERREUR : cannot assign to an array
    
    // Seule solution : copier élément par élément
    for(int i = 0; i < 5; i++) {
        b[i] = a[i];  // ✅
    }
    
     for(int i = 0; i < 5; i++) {
       std::cout<< b[i]<<std::endl;  // ✅
    }
    return 0;
}