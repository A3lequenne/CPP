#pragma once

#include <string>
#include <iostream>
#include <limits>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <cctype>

#define NAN_INF 1
#define ERROR 2
#define CHAR 3
#define INT 4
#define FLOAT 5
#define DOUBLE 6

class Conversion
{
	private:
		const std::string _input;
		int _type;
		char _char;
		int _int;
		float _float;
		double _double;

		// Constructor
		Conversion();
		// Methods
		int checkInput(void);
		void convertInput(void);

		void fromChar(void);
		void fromInt(void);
		void fromFloat(void);
		void fromDouble(void);

		void printOutput(void)const;

		// Getter
		std::string getInput(void)const;
		int getType(void)const;
		char getChar(void)const;
		int getInt(void)const;
		float getFloat(void)const;
		double getDouble(void)const;

	public:
	// Constructors
		Conversion(const std::string input);
		Conversion(const Conversion &src);

	// Deconstructors
		~Conversion();

	// Overloaded Operators
		Conversion &operator=(const Conversion &src);

	//Exceptions
	class ErrorException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};