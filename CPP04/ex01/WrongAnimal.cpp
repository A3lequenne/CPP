#include "WrongAnimal.hpp"

// Constructors
WrongAnimal::WrongAnimal():_type("wrong_default")
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	*this = copy;
}

// Deconstructors
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Deconstructor called" << std::endl;
}

// Overloaded Operators
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "WrongAnimal Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	this->_type = src._type;
	return *this;
}

// Public Methods
void WrongAnimal::makeSound(void)const
{
	std::cout << this->getType() << " says: **WrongAnimal sounds**" << std::endl;
}

// Getter
std::string	WrongAnimal::getType(void)const
{
	return (this->_type);
}