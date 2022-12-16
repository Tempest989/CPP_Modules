#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->fix_num_val = 0;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &input)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = input;
}

Fixed::Fixed(const int input)
{
	// std::cout << "Int constructor called" << std::endl;
	this->fix_num_val = input << this->fractional_bits;
}

Fixed::Fixed(const float input)
{
	// std::cout << "Float constructor called" << std::endl;
	this->fix_num_val = (int)roundf(input * (1 << this->fractional_bits));
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second)
{
	if ((Fixed)first < (Fixed)second)
		return (first);
	return (second);
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second)
{
	if ((Fixed)first > (Fixed)second)
		return (first);
	return (second);
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	if (first < second)
		return (first);
	return (second);
}
Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	if (first > second)
		return (first);
	return (second);
}

Fixed &Fixed::operator=(Fixed const &input)
{
	// std::cout << "Copy Assignment operator called" << std::endl;
	if (this == &input)
		return (*this);
	this->fix_num_val = input.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &input)
{
	out << input.toFloat();
	return (out);
}

bool Fixed::operator<(const Fixed &input)
{
	return (this->fix_num_val < input.getRawBits());
}

bool Fixed::operator>(const Fixed &input)
{
	return (this->fix_num_val > input.getRawBits());
}

bool Fixed::operator<=(const Fixed &input)
{
	return (this->fix_num_val <= input.getRawBits());
}

bool Fixed::operator>=(const Fixed &input)
{
	return (this->fix_num_val >= input.getRawBits());
}

bool Fixed::operator==(const Fixed &input)
{
	return (this->fix_num_val == input.getRawBits());
}

bool Fixed::operator!=(const Fixed &input)
{
	return (this->fix_num_val != input.getRawBits());
}

Fixed Fixed::operator+(const Fixed &input)
{
	Fixed output;

	output.setRawBits(this->fix_num_val + input.getRawBits());
	return (output);
}

Fixed Fixed::operator-(const Fixed &input)
{
	Fixed output;

	output.setRawBits(this->fix_num_val - input.getRawBits());
	return (output);
}

Fixed Fixed::operator*(const Fixed &input)
{
	Fixed output;

	output.setRawBits(this->fix_num_val * input.getRawBits() / (1 << this->fractional_bits));
	return (output);
}

Fixed Fixed::operator/(const Fixed &input)
{
	Fixed output;

	output.setRawBits(this->fix_num_val / input.getRawBits() * (1 << this->fractional_bits));
	return (output);
}

Fixed &Fixed::operator++(void)
{
	this->fix_num_val += 1;
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	this->fix_num_val -= 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);

	this->fix_num_val += 1;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);

	this->fix_num_val -= 1;
	return (temp);
}

int		Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->fix_num_val);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->fix_num_val = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->fix_num_val / (1 << this->fractional_bits));
}

int		Fixed::toInt( void ) const
{
	return (this->fix_num_val >> this->fractional_bits);
}
