#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fix_num_val = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &input)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = input;
}

Fixed &Fixed::operator=(Fixed const &input)
{
	std::cout << "Copy Assignment operator called" << std::endl;
	if (this == &input)
		return (*this);
	this->fix_num_val = input.getRawBits();
	return (*this);
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fix_num_val);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fix_num_val = raw;
}
