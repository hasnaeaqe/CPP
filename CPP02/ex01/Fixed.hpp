#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixed_point;
        static const int fractionalBits;
    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed& autre);
        ~Fixed();
        
        Fixed& operator=(const Fixed& autre);

        float toFloat( void ) const;
        int toInt( void ) const;

        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif