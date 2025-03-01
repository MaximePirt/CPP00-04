#include "Character.hpp"
#include "AMateria.hpp"

// Constructor and Destructor

Character::Character(void)
{
	this->_name = "<_name>";
	std::memset(this->_inventory, 0, 4 * sizeof(AMateria*));
	std::cout << "A character without _name is born !" << std::endl;
}

Character::Character(std::string _name)
{
	this->_name = _name;
	std::memset(this->_inventory, 0, 4 * sizeof(AMateria*));
	std::cout << "A character _named " << this->_name << " is born !" << std::endl;

}

Character::Character(const Character &obj)
{
	this->_name = obj._name;
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = obj._inventory[i]->clone();
	std::cout << "A copy from " << obj._name << " has been created." << std::endl;
}

Character &Character::operator=(const Character &old)
{
	if (this != &old)
	{
		this->_name = old._name;
		for(int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = NULL;
			this->_inventory[i] = old._inventory[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Oh no.. "  << this->_name << " has been destroyed." << std::endl;
}

// Functions

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	if (!m || m == NULL)
		return ;
	int i;
	for (i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			std::cout << this->_name << " just equiped " << m->getType() << " on " << i << " position in inventory." << std::endl;
			return ;
		}
	}
	if (i == 4)
		std::cout << "Inventory is full, unequip something to give " << this->_name << " the equipement." << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 4)
	{
		std::cout << "Index " << idx << " is not in adequacy with character inventory capacity." << std::endl;
	}
	if (this->_inventory[idx])
	{
		std::cout << "Just delet " << this->_inventory[idx]->getType() << " from inventory slot " << idx << "." << std::endl;
		this->_inventory[idx] = NULL;
	}
	else
		std::cout << "No Materia present in " << idx << " inventory slot, nothing was done." << std::endl;

}

int Character::check_inventory(int idx)
{
	if (this->_inventory[idx] != NULL)
	{
		std::cout << "==============inventory name " << this->_inventory[idx]->getType() << std::endl;
		return (1);
	}
	return (0);
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && check_inventory(idx))
		this->_inventory[idx]->use(target);
	else
		std::cout << "Nothing found in this slot, " << this->_name << " couldn't do anything" << std::endl;
}