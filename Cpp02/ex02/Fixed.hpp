#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

//>, <, >=, <=, == and !=

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
		// Overload of the comparison operators
		bool operator >(const Fixed &obj);
		bool operator <(const Fixed &obj);
		bool operator >=(const Fixed &obj);
		bool operator <=(const Fixed &obj);
		bool operator ==(const Fixed &obj);
		bool operator !=(const Fixed &obj);
		// Overload of the arithmetic operators
		Fixed operator +(const Fixed &obj);
		Fixed operator -(const Fixed &obj);
		Fixed operator *(const Fixed &obj);
		Fixed operator /(const Fixed &obj);
		// Increment and decrement operators
		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);
		// Overloaded member functions
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

	private:
		int fixed_point_number;
		static const int fractional_bit_number = 8;
};

// Overload of the << operator
std::ostream &operator <<(std::ostream &out, const Fixed &obj);

// Overload of the comparison operators
// bool operator >(const Fixed &obj);
// bool operator <(const Fixed &obj);
// bool operator >=(const Fixed &obj);
// bool operator <=(const Fixed &obj);
// bool operator ==(const Fixed &obj);
// bool operator !=(const Fixed &obj);
// Overload of the arithmetic operators
// Fixed operator +(const Fixed &obj);
// Fixed operator -(const Fixed &obj);
// Fixed operator *(const Fixed &obj);
// Fixed operator /(const Fixed &obj);




#endif