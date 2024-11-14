#include "Fixed.hpp"

Fixed::Fixed(const int param){
	this->fixed_point_number = param;
	std::cout << "Default constructor called" << std::endl;
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

Fixed::~Fixed() {
	std::cout << "Fixed has been destroyed" << std::endl;
}