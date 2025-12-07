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
