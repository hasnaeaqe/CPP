#include "Fixed.hpp"

const int Fixed::fractionalBits=8;

Fixed::Fixed():fixed_point(0){std::cout<<"Default constructor called"<<std::endl;}

Fixed::Fixed(const Fixed& autre)
{
    fixed_point = autre.fixed_point;
    std::cout<<"Copy constructor called"<<std::endl;
}

Fixed :: Fixed(const int value)
{
    std::cout<<"Int constructor called"<<std::endl;
    fixed_point = value * ( 1 << fractionalBits);
}
Fixed ::Fixed(const float value)
{
    std::cout<<"Float constructor called"<<std::endl;
    fixed_point = roundf(value * ( 1 << fractionalBits));
}
Fixed::~Fixed(){std::cout<<"Destructor called"<<std::endl;}

int Fixed:: getRawBits( void ) const
{
    std::cout<<"getRawBits member function called"<<std::endl;
    return fixed_point;
}
void Fixed::setRawBits( int const raw ){this->fixed_point = raw;}


float Fixed::toFloat( void ) const{return (float)fixed_point / ( 1 << fractionalBits );}

int Fixed::toInt( void ) const{return fixed_point / ( 1 << fractionalBits );}

Fixed& Fixed::operator=(const Fixed& autre)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    if (this != &autre)
        this->fixed_point = autre.fixed_point;
    return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out<<fixed.toFloat();
    return out;
}