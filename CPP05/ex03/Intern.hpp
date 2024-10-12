#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:

	public:
	// Constructors
		Intern();
		Intern(const Intern &src);

	// Deconstructors
		~Intern();

	// Overloaded Operators
		Intern &operator=(const Intern &src);

	// Public Methods
		Form *makeForm(const std::string form, const std::string target);
};