#ifndef CHARACTER_HPP
	#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	public :
	//Constructor and Destructor
		Character();
		Character(std::string name);
		Character(const Character &obj);
		Character &operator=(const Character &old);
		~Character();
	// Functions
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		virtual int check_inventory(int idx);


	private :
		AMateria *_inventory[4];
		std::string _name;
};

#endif