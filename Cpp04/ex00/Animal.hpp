#ifndef ANIMAL_HPP
	#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal(void);
		Animal(std::string name);
		Animal(const Animal &obj);
		~Animal();
		void makeSound() const;
		std::string getType(void) const ;
	protected:
		std::string type;

};

#endif