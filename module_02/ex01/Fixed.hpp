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
		Fixed &operator=(Fixed const &input); //copy assignment operator overload?
		int		getRawBits( void ) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
	private:
		int					fix_num_val;
		static const int	fractional_bits = 8;	
};

std::ostream &operator<<(std::ostream &out, const Fixed &input);

#endif