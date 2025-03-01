#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "A Default cure was created" << std::endl;
}

Cure::Cure(std::string const &_type) : AMateria(_type)
{
	std::cout << "A spell with " << _type << " _type has been created" << std::endl;
}

Cure::Cure(const Cure &obj) : AMateria(obj)
{
	std::cout << "A Copy from " << obj._type << " _type has been created" << std::endl;

}

Cure &Cure::operator=(const Cure &old)
{
	if (this != &old)
		this->_type = old._type;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "We destroyed a Cure : " << this->_type << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}