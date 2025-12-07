#include "Fixed.hpp"

Fixed::Fixed():fixed_point(0)
{
    std::cout<<"Default constructor called"<<std::endl;
}
Fixed::Fixed(const Fixed& autre)
{
    fixed_point = autre.fixed_point;
    std::cout<<"Copy constructor called"<<std::endl;
}
Fixed& Fixed::operator=(const Fixed& autre)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    if (this != &autre)
        this->fixed_point = autre.fixed_point;
    return (*this);
}

int Fixed:: getRawBits( void ) const
{
    std::cout<<"getRawBits member function called"<<std::endl;
    return fixed_point;
}

void Fixed::setRawBits( int const raw )
{
    this->fixed_point = raw;
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
}


Fixed :: Fixed(const int fixed_point):fixed_point(fixed_point)
{
    std::cout<<"Int constructor called"<<std::endl;
}
Fixed ::Fixed(const float fixed_point)
{
    std::cout<<"Float constructor called"<<std::endl;
    /*
    EXPLICATION DE L'UTILISATION DE round() :
    
    1. value * (1 << fractionalBits) = value * 256
       - On multiplie le float par 256 pour convertir en virgule fixe
       - Ex: 42.42 * 256 = 10859.52
    
    2. round() arrondit au nombre entier le plus proche
       - round(10859.52) = 10860
       - Sans round(): partie décimale serait tronquée (10859)
    
    3. Pourquoi utiliser round() et pas un cast direct ?
       float f = 42.42;
       int avec_round = round(f * 256);     // = 10860 (CORRECT)
       int sans_round = (int)(f * 256);     // = 10859 (tronqué)
       int avec_roundf = roundf(f * 256);   // Fonction float équivalente
    
    4. round() vs floor() vs ceil():
       round(1.4) = 1, round(1.5) = 2      // Arrondi mathématique
       floor(1.9) = 1                      // Arrondi vers le bas
       ceil(1.1) = 2                       // Arrondi vers le haut
    */
    this->fixed_point = roundf(fixed_point *(1<<fractionalBits));
}

float Fixed::toFloat( void ) const
{
    // Division par 256 pour retrouver le float
    // Ex: 10860 / 256.0 = 42.421875
    return (float)this->fixed_point/(1<<fractionalBits);
    
}
int Fixed::toInt( void ) const
{
    // Décalage de 8 bits vers la droite pour enlever la partie fractionnaire
    // Ex: 10860 >> 8 = 42 (partie entière seulement)
    return this->fixed_point>>fractionalBits;
}
std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out<<fixed.toFloat();
    return out;
}