#include "Fixed.hpp"


Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed() : fpnumb(0)
{
    std::cout << "Default constructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fpnumb;
}


void Fixed::setRawBits(int const raw)
{
    fpnumb = raw;
}

Fixed& Fixed::operator=(const Fixed &exist)
{
    if (this != &exist){
        fpnumb = exist.fpnumb;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Fixed::Fixed(const Fixed& exist)
{
    fpnumb = exist.fpnumb;
    std::cout << "Copy constructor called" << std::endl;
}