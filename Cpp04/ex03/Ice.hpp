#ifndef ICE_HPP
	#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(std::string const &type);
		Ice(const Ice &obj);
		Ice &operator=(const Ice &old);
		virtual ~Ice();
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
	private:
};

#endif