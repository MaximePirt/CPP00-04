#include "AMateria.hpp"

AMateria:: AMateria(void)
{
	this->_type = "Default";
	std::cout << "A Default Materia was created" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	std::cout << "A Materia with " << type << " _type has been created" << std::endl;
}

AMateria::AMateria(const AMateria &obj)
{
	this->_type = obj._type;
	std::cout << "A Copy from " << obj._type << " _type has been created" << std::endl;

}

AMateria &AMateria::operator=(const AMateria &old)
{
	std::cout << "AMateria assignement operator called" << std::endl;
	if (this != &old)
		this->_type = old._type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "We destroyed a Materia : " << this->_type << std::endl;
}


std::string const & AMateria::getType() const
{
	return (this->_type);
}


void AMateria::use(ICharacter &target)
{
	if (this->_type.length() > 1)
	std::cout << "Use of " << this->_type << " on " << target.getName() << ", even if we don't really know what it is." << std::endl;
}