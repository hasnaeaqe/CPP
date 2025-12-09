#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;


    //tester min et const min 

    // Fixed a(5.0f);
    // Fixed b(3.0f);
    // const Fixed c(7.0f);
    // const Fixed d(2.0f);

    // // Version non-const (objets modifiables)
    // Fixed& m1 = Fixed::min(a, b);  // OK
    // std::cout <<"avanr:<<"<< m1 << std::endl;
    // m1 = Fixed(10);  // Permis - modifie a ou b
    // std::cout <<"aijjjh:<<"<< m1 << std::endl;

    // // Version const (objets constants)
    // const Fixed& m2 = Fixed::min(c, d);  // OK
    // std::cout <<"hh:<<"<< m2 << std::endl;

    // // m2 = Fixed(10);  // ❌ Interdit - c et d sont const

    // // Mixte : version const peut accepter non-const
    // const Fixed& m3 = Fixed::min(b, c);  // OK
    // std::cout << m3 << std::endl;

    return 0;
}