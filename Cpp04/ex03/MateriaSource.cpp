#include "MateriaSource.hpp"

// Creator and Destructor

MateriaSource::MateriaSource()
{
	std::memset(this->_chapters, 0, 4 * sizeof(AMateria*));
	std::cout << "MateriaSource created!" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	for (int i = 0; i < 4; i++)
		this->_chapters[i] = obj._chapters[i];
	std::cout << "Copy MateriaSource was created!" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &old)
{
	if (this != &old)
	{
		for (int i = 0; i < 4; i++)
			this->_chapters[i] = old._chapters[i];
		std::cout << "Operator MateriaSource was created!" << std::endl;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_chapters[i])
			delete this->_chapters[i];
	}
	std::cout << "Every chapters from MateriaSource and itself were destroyed" << std::endl;
}

//Functions

/**
 * @brief Copies the Materia passed as a parameter and store it in memory so it can be cloned
later. Like the Character, the MateriaSource can know at most 4 Materias. They
are not necessarily unique
 */
void MateriaSource::learnMateria(AMateria *obj)
{
	for(int i = 0; i < 4; i++)
	{
		if (!this->_chapters[i])
		{
			this->_chapters[i] = obj;
			std::cout << "MateriaSource learned " << obj->getType() << " at slot " << i << "." << std::endl;
			return ; 
		}
	}
	std::cout << "All chapters in this MateriaSource already used." << std::endl;
}


/**
 * @brief Returns a new Materia. The latter is a copy of the Materia previously learned by
the MateriaSource whose type equals the one passed as parameter. Returns 0 if
the type is unknown.
 */
AMateria* MateriaSource::createMateria(std::string const &type)
{
	AMateria *res;
	for (int i = 0; i < 4; i++)
	{
		if (this->_chapters[i] && type == this->_chapters[i]->getType())
		{
			res = this->_chapters[i]->clone();
			return(res);
		}
	}
	res = NULL;
	std::cout << "The materia type is unknown." << std::endl;
	return (res);
}