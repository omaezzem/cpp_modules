#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>

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

};

#endif