# C++ Exercices - Bureaucrats, Forms, and Interns

## Introduction
This repository contains exercises aimed at enhancing your understanding of advanced C++ concepts, including inheritance, polymorphism, exception handling, and dynamic object creation. The theme of bureaucrats and forms serves as a playful context for exploring class hierarchies, exception safety, abstract classes, and more.

## Exercises Overview

### Exercise 00: Bureaucrat Class
- **Description**: Implement the `Bureaucrat` class. A bureaucrat has a name and a grade, with grades ranging from 1 (highest) to 150 (lowest). The class should:
  - Allow incrementing and decrementing grades, throwing exceptions (`GradeTooHighException` or `GradeTooLowException`) if the grade goes beyond allowed limits.
  - Overload the `<<` operator to provide formatted output of the bureaucrat's details.
- **Key Concepts**: Constructors, destructors, operator overloading, exception handling.
- **Example Execution**:
  ```sh
  ./BureaucratDemo
  ```
  **Output**:
  ```
  Constructing Bureaucrat with name: default, grade: 150
  Bureaucrat default, grade 150
  Trying to increment grade...
  Bureaucrat default, grade 149
  Deconstructing Bureaucrat default
  ```

### Exercise 01: Form Class
- **Description**: Introduce a `Form` class that can be signed by a `Bureaucrat`. Each form has a name, a sign grade, and an execution grade. A bureaucrat must have a high enough grade to sign a form; otherwise, an exception is thrown.
  - Implement the `beSigned()` method to allow a `Bureaucrat` to sign the form.
  - Define exceptions (`GradeTooLowException`, `GradeTooHighException`) to handle invalid signing attempts.
- **Key Concepts**: Class associations, access control, exception handling.
- **Example Execution**:
  ```sh
  ./FormSigningDemo
  ```
  **Output**:
  ```
  Constructing Form: Contract, sign grade: 50, execution grade: 20
  Bureaucrat default, grade 60 attempts to sign Contract
  Failed: Grade too low
  Bureaucrat Assistant, grade 40 attempts to sign Contract
  Contract signed by Assistant
  ```

### Exercise 02: Form Execution
- **Description**: Extend the `Form` class to add execution capabilities. Create three derived forms: `ShrubberyCreationForm`, `RobotomyRequestForm`, and `PresidentialPardonForm`, each with unique execution behavior.
  - Inherit from the `Form` base class and override the `execute()` method in each derived class.
- **Key Concepts**: Inheritance, polymorphism, virtual functions, abstract classes.
- **Example Execution**:
  ```sh
  ./FormExecutionDemo
  ```
  **Output**:
  ```
  Constructing ShrubberyCreationForm for target: garden
  Bureaucrat CEO, grade 1 attempts to execute ShrubberyCreationForm
  Creating shrubbery in garden
  ```

### Exercise 03: Intern Class
- **Description**: Introduce the `Intern` class, which can create specific forms based on given input. The `Intern` implements a `makeForm()` method that takes a form name and target as parameters, and returns the corresponding form.
  - Handle incorrect form names gracefully by printing an error message.
  - Use a factory pattern to dynamically create forms.
- **Key Concepts**: Factory pattern, dynamic memory allocation, code flexibility.
- **Example Execution**:
  ```sh
  ./InternDemo
  ```
  **Output**:
  ```
  Intern is asked to create PresidentialPardonForm for target: Marvin
  Intern creates PresidentialPardonForm
  Bureaucrat executes the form, pardoning Marvin
  ```

## How to Compile
Each exercise comes with a Makefile for easier compilation. To compile any of the exercises, simply run:

```sh
make
```

The Makefile uses the following command: `clang++ -Wall -Wextra -Werror -std=c++98`.

## Key Concepts to Master
- **Exception Handling**: Properly throw and catch exceptions to manage erroneous conditions such as invalid grades or attempts to sign/execute forms without permission.
- **Inheritance and Polymorphism**: Create and work with base and derived classes, using virtual functions to ensure the correct methods are invoked during polymorphic behavior.
- **Orthodox Canonical Form**: Ensure your classes include appropriate constructors, destructor, and assignment operator, adhering to the canonical form for proper memory management and deep copying.
- **Factory Pattern**: Implement the factory pattern in the `Intern` class for dynamic and flexible form creation, enhancing code modularity and reducing dependencies.

## Summary
These exercises demonstrate how to effectively use inheritance, polymorphism, exception safety, and design patterns in C++. By completing these exercises, learners will gain a thorough understanding of designing robust class hierarchies, managing exceptions, and implementing advanced object-oriented features. Module 05 continues to build confidence in creating clean, maintainable, and flexible C++ code.