#pragma once

#include <string>
#include <iostream>
#include <stdint.h>

typedef struct Data
{
	std::string	name;
	size_t		age;
	Data		*next;
}				Data;

class Serializer
{
	private:

	public:
	// Constructors
		Serializer();
		Serializer(const Serializer &src);

	// Deconstructors
		~Serializer();

	// Overloaded Operators
		Serializer &operator=(const Serializer &src);

	// Public Methods
		uintptr_t serialize(Data *ptr);
		Data *unserialize(uintptr_t raw);
};

// Ostream overload
// std::ostream	&operator<<(std::ostream &o, Data *a);