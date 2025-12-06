#include "Fixed.hpp"

Fixed::Fixed():fixed_point(0)
{
    std::cout<<"Default constructor called"<<std::endl;
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
