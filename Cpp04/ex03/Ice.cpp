#include "Ice.hpp"

Ice:: Ice(void) : AMateria("ice")
{
	std::cout << "A Default ice was created" << std::endl;
}

Ice::Ice(std::string const &_type) : AMateria(_type)
{
	std::cout << "A spell with " << _type << " _type has been created" << std::endl;
}

Ice::Ice(const Ice &obj) : AMateria(obj)
{
	std::cout << "A Copy from " << obj._type << " _type has been created" << std::endl;

}

Ice &Ice::operator=(const Ice &old)
{
	if (this != &old)
		this->_type = old._type;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "We destroyed a Ice : " << this->_type << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}