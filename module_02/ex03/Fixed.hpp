#ifndef FIXED
#define FIXED

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();					//default constructor
		~Fixed();					//destructor
		Fixed(const int input);
		Fixed(const float input);
		Fixed(const Fixed &input);   //copy constructor
		Fixed	&operator=(Fixed const &input); //copy assignment operator overload?

		// static min and max methods
		static const Fixed	&min(const Fixed &first, const Fixed &second);
		static const Fixed	&max(const Fixed &first, const Fixed &second);
		static Fixed		&min(Fixed &first, Fixed &second);
		static Fixed		&max(Fixed &first, Fixed &second);
		
		// Comparison operators
		bool		operator<(const Fixed &input);
		bool		operator>(const Fixed &input);
		bool		operator<=(const Fixed &input);
		bool		operator>=(const Fixed &input);
		bool		operator==(const Fixed &input);
		bool		operator!=(const Fixed &input);

		// Arithmetic operators
		Fixed		operator+(const Fixed &input);
		Fixed		operator-(const Fixed &input);
		Fixed		operator*(const Fixed &input);
		Fixed		operator/(const Fixed &input);

		// Increment and decrement operators
		Fixed		&operator++(void);
		Fixed		&operator--(void);
		Fixed		operator++(int);
		Fixed		operator--(int);

		// Setters and Getters
		int			getRawBits( void ) const;
		void		setRawBits(int const raw);

		// conversions
		float		toFloat( void ) const;
		int			toInt( void ) const;

	private:
		int					fix_num_val;
		static const int	fractional_bits = 8;	
};

std::ostream &operator<<(std::ostream &out, const Fixed &input);

#endif