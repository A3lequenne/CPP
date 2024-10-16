#include "Serializer.hpp"

int main()
{
	Data ptr2;
	ptr2.name = "Hubert deLabatte";
	ptr2.age = 42;
	ptr2.next = NULL;

	Data ptr;
	ptr.name = "Doigmerde Lamerde";
	ptr.age = 42;
	ptr.next = &ptr2;


	std::cout << "Here is the original structs:" <<
				"\n\taddress: " << &ptr <<
				"\n\tname: " << ptr.name <<
				"\n\tage: " << ptr.age <<
				"\n\taddress next: " << ptr.next <<
	std::endl;
	std::cout << "\taddress ptr2: " << &ptr2 <<
				"\n\tname: " << ptr2.name <<
				"\n\tage: " << ptr2.age <<
				"\n\taddress next: " << ptr2.next <<
	std::endl << std::endl;

	Serializer a;

	Data *reserialized_struct = a.unserialize(a.serialize(&ptr));

	std::cout << "Here is the reserialized structs:" <<
				"\n\taddress: " << reserialized_struct <<
				"\n\tname: " << reserialized_struct->name <<
				"\n\tage: " << reserialized_struct->age <<
				"\n\taddress next: " << reserialized_struct->next <<
	std::endl;
	std::cout << "\taddress ptr2: " << &ptr2 <<
				"\n\tname: " << ptr2.name <<
				"\n\tage: " << ptr2.age <<
				"\n\taddress next: " << ptr2.next <<
	std::endl << std::endl;

	return (0);
}