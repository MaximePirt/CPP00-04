#include "Fixed.hpp"

/**
 * @brief Overload of the << operator to display the Fixed object
 */
std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return out;
}

/**
 * @brief All the booleans operator to compare two Fixed objects
 */
bool Fixed::Fixed::operator >(const Fixed &obj)
{
	return (this->getRawBits() > obj.getRawBits());
}
bool Fixed::operator <(const Fixed &obj)
{
	return (this->getRawBits() < obj.getRawBits());
}
bool Fixed::operator >=(const Fixed &obj)
{
	return (this->getRawBits() >= obj.getRawBits());
}
bool Fixed::operator <=(const Fixed &obj)
{
	return (this->getRawBits() <= obj.getRawBits());
}
bool Fixed::operator ==(const Fixed &obj)
{
	return (this->getRawBits() == obj.getRawBits());
}
bool Fixed::operator !=(const Fixed &obj)
{
	return (this->getRawBits() != obj.getRawBits());
}

/**
 * @brief All the increment and decrement operator to do math with one Fixed object
 */
Fixed &Fixed::operator++(void)
{
	this->fixed_point_number++;
	return (*this);
}
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->fixed_point_number++;
	return tmp;
}
Fixed &Fixed::operator--(void)
{
	this->fixed_point_number--;
	return (*this);
}
Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->fixed_point_number--;
	return tmp;
}

/**
 * @brief All the arithmetic operator to do math with two Fixed objects
 */
Fixed Fixed::operator +(const Fixed &obj)
{
	return Fixed(this->toFloat() + obj.toFloat());
}
Fixed Fixed::operator -(const Fixed &obj)
{
	return Fixed(this->toFloat() - obj.toFloat());
}
Fixed Fixed::operator *(const Fixed &obj)
{
	Fixed tmp;

	tmp.fixed_point_number = (this->getRawBits() * obj.getRawBits()) / (1 << this->fractional_bit_number);
	return Fixed(tmp);
}
Fixed Fixed::operator /(const Fixed &obj)
{
	Fixed tmp;

	tmp.fixed_point_number = (this->getRawBits() * (1 << this->fractional_bit_number)) / obj.getRawBits();
	return Fixed(tmp);
}

/**
 * @brief All the static member functions to compare two Fixed objects (min and max)
 */
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

/**
 * @brief Constructor, destructor and all Fixed functions
 */
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
	if (this != &old)
		fixed_point_number = old.fixed_point_number;
	return (*this);
}

int Fixed::getRawBits(void) const{
	return (this->fixed_point_number);
}

void Fixed::setRawBits(int const raw){
	this->fixed_point_number = raw;
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