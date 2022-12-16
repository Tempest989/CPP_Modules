#ifndef FIXED
#define FIXED

#include <iostream>

class Fixed
{
	public:
		Fixed();					//default constructor
		~Fixed();					//destructor
		Fixed(const Fixed &input);   //copy constructor
		Fixed &operator=(Fixed const &input); //copy assignment operator overload?
		int		getRawBits( void ) const;
		void	setRawBits(int const raw);
	private:
		int					fix_num_val;
		static const int	fractional_bits = 8;	
};

#endif