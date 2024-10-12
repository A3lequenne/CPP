#pragma once

#include "Animal.hpp"


class Dog: public Animal
{
	private:

	public:
	// Constructors
		Dog();
		Dog(const Dog &copy);

	// Deconstructors
		~Dog();

	// Overloaded Operators
		Dog &operator=(const Dog &src);

	// Public Methods
		void makeSound(void)const;
};