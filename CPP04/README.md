# C++ Exercices - Polymorphism, Abstract Classes, and Virtual Functions

## Introduction
This repository contains exercises designed to help learners understand and implement polymorphism, abstract classes, and virtual functions in C++. The module includes examples with animals and their derived classes, showcasing different behaviors using inheritance and dynamic dispatch. Each exercise gradually builds upon these concepts, focusing on the effective use of inheritance, abstract methods, and the idea of deep copies.

## Exercises Overview

### Exercise 00: Polymorphism with Animal Classes
- **Description**: Implement a base `Animal` class and two derived classes, `Dog` and `Cat`. The `Animal` class has a virtual function `makeSound()` which is overridden in each derived class. A `WrongAnimal` class and a `WrongCat` class are also included to demonstrate what happens when virtual functions are not used properly.
- **Key Concepts**: Introduction to polymorphism, virtual destructors, function overriding, and basic inheritance.
- **Example Execution**:
  ```sh
  ./Polymorphism
  ```
  **Output**:
  ```
  Constructing
  Animal _type: default
  This animal doesn't make any sound.
  Deconstructing
  Cat _type: Cat
  Cat says: **Meeeoow**
  Deconstructing
  Dog _type: Dog
  Dog says: **Woof**
  Deconstructing
  WrongAnimal _type: wrong_default
  WrongAnimal says: **WrongAnimal sounds**
  Deconstructing
  WrongCat _type: WrongCat
  WrongAnimal says: **WrongAnimal sounds**
  Deconstructing
  ```

### Exercise 01: Deep Copy and Brain Class
- **Description**: Extend the previous `Animal` classes with a `Brain` class. Both `Dog` and `Cat` classes now contain an instance of `Brain`. Implement deep copying to ensure that each `Dog` or `Cat` has a distinct copy of `Brain`.
- **Key Concepts**: Deep copy, dynamic memory allocation, custom copy constructors, and destructors.
- **Example Execution**:
  ```sh
  ./watch_it_burn
  ```
  **Output**:
  ```
  Constructing
  Animal _type: Dog
  Dog says: **Woof**
  Animal _type: Cat
  Cat says: **Meeeoow**
  ...
  #### showing that the copy constructor creates a deep copy ####
  Constructing
  Testing a
  The Dog a has the following ideas:
      Idea 0 of the Dog is: "I have to sniff it" at address ...
      Idea 1 of the Dog is: "I have to pee on it" at address ...
  Deconstructing a
  Testing b
  The Dog b has the following ideas:
      Idea 0 of the Dog is: "I have to sniff it" at address ...
      Idea 1 of the Dog is: "I have to pee on it" at address ...
  Deconstructing b
  ```

### Exercise 02: Abstract Classes and Pure Virtual Methods
- **Description**: Make the `Animal` class abstract by declaring `makeSound()` as a pure virtual function. This ensures that only derived classes can be instantiated, enforcing polymorphic behavior.
- **Key Concepts**: Abstract base classes, pure virtual functions, interface enforcement, and usage of protected constructors for base classes.
- **Example Execution**:
  ```sh
  ./watch_it_burn
  ```
  **Output**:
  ```
  Constructing
  Animal _type: Dog
  Dog says: **Woof**
  Animal _type: Cat
  Cat says: **Meeeoow**
  ...
  #### showing that the copy constructor creates a deep copy ####
  Constructing
  Testing a
  The Dog a has the following ideas:
      Idea 0 of the Dog is: "I have to sniff it" at address ...
      Idea 1 of the Dog is: "I have to pee on it" at address ...
  Deconstructing a
  Testing b
  The Dog b has the following ideas:
      Idea 0 of the Dog is: "I have to sniff it" at address ...
      Idea 1 of the Dog is: "I have to pee on it" at address ...
  Deconstructing b
  ```

## How to Compile
Each exercise comes with a Makefile for easier compilation. To compile any of the exercises, simply run:

```sh
make
```

The Makefile uses the following command: `clang++ -Wall -Wextra -Werror -std=c++98`.

## Summary
These exercises demonstrate how to effectively use polymorphism, virtual functions, deep copies, and abstract classes in C++. By completing these exercises, learners should gain a thorough understanding of inheritance, dynamic dispatch, and memory management for polymorphic classes. The module emphasizes understanding both the power and the pitfalls of inheritance, providing a comprehensive learning experience.

