#include "Fixed.hpp"

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return out;
}

Fixed::Fixed(){
	this->fixed_point_number = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int param){
	this->fixed_point_number = param << this->fractional_bit_number;
	std::cout << "INT constructor called" << std::endl;
}

Fixed::Fixed(const float param){
	this->fixed_point_number = roundf(param * (1 << this->fractional_bit_number));

	std::cout << "FLOAT constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &old) : fixed_point_number(old.fixed_point_number){
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &old) {
	if (this != &old) {
		fixed_point_number = old.fixed_point_number;
		std::cout << "Copy assignment operator called" << std::endl;
	}
	return (*this);
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_number);
}

void Fixed::setRawBits(int const raw){
	this->fixed_point_number = raw;
	std::cout << "Rawbits set" << std::endl;
}

float Fixed::toFloat(void) const{
return static_cast<float>(this->fixed_point_number) / (1 << this->fractional_bit_number);
}

int Fixed::toInt(void) const{
	return (this->fixed_point_number >> this->fractional_bit_number);
}

Fixed::~Fixed() {
	std::cout << "Fixed has been destroyed" << std::endl;
}