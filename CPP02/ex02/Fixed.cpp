#include "Fixed.hpp"

const int Fixed::fractionalBits=8;
Fixed::Fixed():fixed_point(0)
{
    // std::cout<<"Default constructor called"<<std::endl;
}
Fixed::Fixed(const Fixed& autre)
{
    fixed_point = autre.fixed_point;
    // std::cout<<"Copy constructor called"<<std::endl;
}
Fixed& Fixed::operator=(const Fixed& autre)
{
    // std::cout<<"Copy assignment operator called"<<std::endl;
    if (this != &autre)
        this->fixed_point = autre.fixed_point;
    return (*this);
}

int Fixed:: getRawBits( void ) const
{
    // std::cout<<"getRawBits member function called"<<std::endl;
    return fixed_point;
}

void Fixed::setRawBits( int const raw )
{
    this->fixed_point = raw;
}

Fixed::~Fixed()
{
    // std::cout<<"Destructor called"<<std::endl;
}


Fixed :: Fixed(const int value)
{
    // std::cout<<"Int constructor called"<<std::endl;
    fixed_point = value<<fractionalBits;///////////////////////////////
}
Fixed ::Fixed(const float value)
{
    // std::cout<<"Float constructor called"<<std::endl;
    fixed_point = roundf(value *(1<<fractionalBits));
}

float Fixed::toFloat( void ) const
{
    return static_cast<float>(fixed_point)/(1<<fractionalBits);
    
}
int Fixed::toInt( void ) const
{
    return fixed_point>>fractionalBits;/////////////////////////
}
std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out<<fixed.toFloat();
    return out;
}

//return (Fixed (Fixed(this->toFloat() + other.toFloat())));
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
    Fixed result;
    long long mult = (long long)fixed_point * (long long)autre.fixed_point; //je dois verifier l overflow ?? jsp hemm
    result.fixed_point = static_cast<int>(mult >> fractionalBits);  //casting omme ca ???
    
    return(result);
}

Fixed Fixed::operator/(const Fixed& autre)
{
    Fixed result;
    long long div = fixed_point << fractionalBits;
    if (autre.fixed_point != 0)
        result.fixed_point = static_cast<int>(div / autre.fixed_point);
    return(result);
}

bool Fixed::operator<(const Fixed& autre) const //pour min const 
{
    return (fixed_point < autre.fixed_point);
}
bool Fixed::operator<=(const Fixed& autre)
{
    return (fixed_point <= autre.fixed_point);
}
bool Fixed::operator>(const Fixed& autre) const //max const
{
    return (fixed_point > autre.fixed_point);
}
bool Fixed::operator>=(const Fixed& autre)
{
    return (fixed_point >= autre.fixed_point);
}
bool Fixed::operator==(const Fixed& autre)
{
    return (fixed_point == autre.fixed_point);
}
bool Fixed::operator!=(const Fixed& autre)
{
    return (fixed_point != autre.fixed_point);
}

Fixed Fixed::operator++(int)
{
    Fixed val = (*this);
    fixed_point += 1;
    return (val);
}
Fixed Fixed::operator++()   //sans &
{
    fixed_point += 1;  //
    return *this; //()
}
Fixed Fixed::operator--( int )
{
    Fixed val = (*this);
    fixed_point -= 1;
    return (val);
}  
Fixed Fixed::operator--( void )
{
    fixed_point -= 1;  //
    return *this;
    
}

//     if (one.toFloat() > two.toFloat())
//         return (two);
//     else
//         return (one);

Fixed& Fixed::min(Fixed& val1, Fixed& val2)
{
    return (val1 < val2) ? val1 : val2;
}
const Fixed& Fixed::min(const Fixed& val1, const Fixed& val2)
{
    return (val1 < val2)?val1: val2;
}

Fixed& Fixed::max(Fixed& val1, Fixed& val2)
{
    return (val1 > val2)?val1: val2;
}
const Fixed& Fixed::max(const Fixed& val1, const Fixed& val2)
{
    return (val1 > val2)?val1: val2;
}