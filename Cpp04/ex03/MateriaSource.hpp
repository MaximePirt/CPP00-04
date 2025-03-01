#ifndef MATERIASOURCE_HPP
	#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
	//Constructor and Destructor
		MateriaSource(void);
		MateriaSource(const MateriaSource &obj);
		MateriaSource &operator=(const MateriaSource &old);
		virtual ~MateriaSource();
	// Functions
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

	private :
		AMateria *_chapters[4];
};

#endif