#include "Fixed.hpp"

const int Fixed::fractionalBits=8;

Fixed::Fixed():fixed_point(0){}

Fixed::Fixed(const Fixed& autre){fixed_point = autre.fixed_point;}

Fixed :: Fixed(const int value){this->setRawBits(value * (1 <<fractionalBits));}

Fixed ::Fixed(const float value){fixed_point = roundf(value *(1<<fractionalBits));}

Fixed::~Fixed(){}

int Fixed:: getRawBits( void ) const {return fixed_point;}

void Fixed::setRawBits( int const raw ){this->fixed_point = raw;}

float Fixed::toFloat( void ) const{return (float)(fixed_point)/(1<<fractionalBits);}

int Fixed::toInt( void ) const{return fixed_point / (1 << fractionalBits);}

Fixed& Fixed::operator=(const Fixed& autre)
{
    if (this != &autre)
        this->fixed_point = autre.fixed_point;
    return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out<<fixed.toFloat();
    return out;
}

Fixed Fixed::operator+(const Fixed& autre)
{
    Fixed result;
    result.fixed_point = fixed_point + autre.fixed_point;
    return(result);
}

Fixed Fixed::operator-(const Fixed& autre)
{
    Fixed result;
    result.fixed_point = fixed_point - autre.fixed_point;
    return(result);
}

Fixed Fixed::operator*(const Fixed& autre)
{
    return(Fixed(this->toFloat()*autre.toFloat()));
}

Fixed Fixed::operator/(const Fixed& autre)
{
    if (autre.fixed_point == 0)
    {
        std::cout<<"Error: division by 0 "<<std::endl;
        return (Fixed(0));
    }
    return(Fixed(this->toFloat()/autre.toFloat()));
}

bool Fixed::operator<(const Fixed& autre) const  {return (fixed_point < autre.fixed_point);}

bool Fixed::operator<=(const Fixed& autre)  const {return (fixed_point <= autre.fixed_point);}

bool Fixed::operator>(const Fixed& autre) const {return (fixed_point > autre.fixed_point);}

bool Fixed::operator>=(const Fixed& autre)  const {return (fixed_point >= autre.fixed_point);}

bool Fixed::operator==(const Fixed& autre)  const {return (fixed_point == autre.fixed_point);}

bool Fixed::operator!=(const Fixed& autre)  const {return (fixed_point != autre.fixed_point);}


Fixed Fixed::operator++(int)
{
    Fixed val = (*this);
    fixed_point += 1;
    return (val);
}

Fixed Fixed::operator--( int )
{
    Fixed val = (*this);
    fixed_point -= 1;
    return (val);
}  

Fixed& Fixed::operator++()
{
    fixed_point += 1;
    return *this; 
}

Fixed& Fixed::operator--()
{
    fixed_point -= 1; 
    return *this;
    
}

Fixed& Fixed::min(Fixed& val1, Fixed& val2){return (val1 < val2) ? val1 : val2;}

const Fixed& Fixed::min(const Fixed& val1, const Fixed& val2){return (val1 < val2)?val1: val2;}


Fixed& Fixed::max(Fixed& val1, Fixed& val2){return (val1 > val2)?val1: val2;}

const Fixed& Fixed::max(const Fixed& val1, const Fixed& val2){return (val1 > val2)?val1: val2;}
