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

        float toFloat( void ) const;
        int toInt( void ) const;

        Fixed(const Fixed& autre);
        Fixed& operator=(const Fixed& autre);
        ~Fixed();
        

        int getRawBits( void ) const;
        void setRawBits( int const raw );

        Fixed operator+(const Fixed& autre) ;
        Fixed operator-(const Fixed& autre) ;
        Fixed operator*(const Fixed& autre) ;
        Fixed operator/(const Fixed& autre) ;

        bool operator<(const Fixed& autre) ;
        bool operator<=(const Fixed& autre) ;
        bool operator>(const Fixed& autre) ;
        bool operator>=(const Fixed& autre) ;
        bool operator==(const Fixed& autre) ;
        bool operator!=(const Fixed& autre) ;

            // name
        Fixed operator++( int );
        Fixed operator--( int );  
        
        Fixed operator++( void );
        Fixed operator--( void );

        static Fixed& min(Fixed& val1, Fixed& val2);
        static const Fixed& min(const Fixed& val1, const Fixed& val2);

        static Fixed& max(Fixed& val1, Fixed& val2);
        static const Fixed& max(const Fixed& val1, const Fixed& val2);

};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif