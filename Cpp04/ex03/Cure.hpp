#ifndef CURE_HPP
	#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(std::string const &type);
		Cure(const Cure &obj);
		Cure &operator=(const Cure &old);
		virtual ~Cure();
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
	private:
};

#endif