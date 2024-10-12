#pragma once

#include "WrongAnimal.hpp"


class WrongCat: public WrongAnimal
{
	private:

	public:
	// Constructors
		WrongCat();
		WrongCat(const WrongCat &copy);

	// Deconstructors
		~WrongCat();

	// Overloaded Operators
		WrongCat &operator=(const WrongCat &src);

	// Public Methods
		void makeSound(void)const;
};