#ifndef WRONGCAT_HPP
	#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	WrongCat();
	WrongCat(const WrongCat &obj);
	WrongCat &operator=(const WrongCat &old);
	~WrongCat();
	void makeSound() const;

	private:
};

#endif