#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed
{
	public:
		Fixed(void);
		Fixed(const int param);
		Fixed(const float param);
		Fixed(const Fixed &old);
		Fixed &operator=(const Fixed &old);
		Fixed &operator<<(const Fixed &old);
		~Fixed();
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int fixed_point_number;
		static const int fractional_bit_number = 8;
};

std::ostream &operator <<(std::ostream &out, const Fixed &obj);


#endif