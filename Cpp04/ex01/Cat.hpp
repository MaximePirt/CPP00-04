#ifndef CAT_HPP
	#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &obj);
		Cat &operator=(const Cat &old);
		~Cat();
		void makeSound() const;
		void		set_idea(const std::string &idea);
		void		print_cat_idea(int index) const;
	private:
		Brain *_cat_brain;
		std::string	get_ideas(int index);

};


#endif