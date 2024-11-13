#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &old);
		Fixed &operator=(const Fixed &old);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int fixed_point_number;
		static const int fractional_bit_number = 8;
};

#endif