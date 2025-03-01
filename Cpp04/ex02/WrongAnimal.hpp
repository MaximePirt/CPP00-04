#ifndef WRONGANIMAL_HPP
	#define WRONGANIMAL_HPP

#include <iostream>
#include <string>	

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(std::string name);
		WrongAnimal(const WrongAnimal &obj);
		WrongAnimal &operator=(const WrongAnimal &old);
		virtual ~WrongAnimal();
		void makeSound() const;
		std::string getType(void) const ;
	protected:
		std::string type;
};

#endif