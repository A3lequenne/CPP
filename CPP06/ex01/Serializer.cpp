#include "Serializer.hpp"

// Constructors
Serializer::Serializer()
{
	std::cout << "Serializer Default Constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &src)
{
	std::cout << "Serializer Copy Constructor called" << std::endl;
	*this = src;
}

// Deconstructors
Serializer::~Serializer()
{
	std::cout << "Serializer Deconstructor called" << std::endl;
}

// Overloaded Operators
Serializer &Serializer::operator=(const Serializer &src)
{
	std::cout << "Serializer Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	return *this;
}

// Public Methods
uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::unserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

// Ostream overload
// std::ostream	&operator<<(std::ostream &o, Data *a)
// {
// 	o <<
// 	"\tName: " << a->name <<
// 	"\n\tage: " << a->age <<
// 	std::endl;
// 	return (o);
// }