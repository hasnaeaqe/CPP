#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixed_point;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const int fixed_point);
        Fixed(const float fixed_point);

        float toFloat( void ) const;
        int toInt( void ) const;

        Fixed(const Fixed& autre);
        Fixed& operator=(const Fixed& autre);
        ~Fixed();
        

        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif