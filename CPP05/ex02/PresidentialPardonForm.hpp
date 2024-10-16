#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;

class From;

class PresidentialPardonForm: public Form
{
	private:
		const std::string _target;
	// moved the default Constructor to private because subject asks for orthodox canonical form
	// but also asks for the Forms to only have one constructor that takes one argument
		PresidentialPardonForm(void);
	public:
	// Constructors
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm &src);

	// Deconstructors
		~PresidentialPardonForm();

	// Overloaded Operators
		PresidentialPardonForm &operator=(const PresidentialPardonForm &src);

	// Public Methods
		void execute(Bureaucrat const &executor)const;
	// Getter
		std::string getTarget(void)const;
};

// // ostream Overload
std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm *a);