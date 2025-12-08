#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixed_point;
        static const int fractionalBits = 8; //maybe this en c++!11 attentiooon hsnaaae zwwena
    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);

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