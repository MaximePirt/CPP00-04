#ifndef AMATERIA_HPP
	#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"


class AMateria
{	
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria &obj);
		AMateria &operator=(const AMateria &old);
		virtual ~AMateria();
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	protected:
		std::string _type;
};

#endif