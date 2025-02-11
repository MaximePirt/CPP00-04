#ifndef DOG_HPP
	#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &obj);
		Dog &operator=(const Dog &old);
		~Dog();
		void 		makeSound() const;
		void		set_idea(const std::string &idea);
		std::string	get_ideas(int index);
		void		print_dog_idea(int index) const;
	private:
		Brain *_dog_brain;

};


#endif