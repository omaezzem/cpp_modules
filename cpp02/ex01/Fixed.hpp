#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <cmath>

class Fixed 
{
    private:
        int fpnumb;
    public:
        Fixed();
        Fixed(const Fixed &a);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed& operator=(const Fixed &other);
        int toInt( void ) const;
        float toFloat( void ) const;
        Fixed(const int n);
        Fixed(const float f);

};

#endif