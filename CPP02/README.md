# C++ Exercises - Fixed Point Arithmetic and Class Operators

## Introduction
This repository contains a set of exercises designed to help learners grasp the concepts of fixed-point arithmetic, class operators, and other object-oriented programming features in C++. The exercises gradually increase in complexity, reinforcing understanding of constructors, destructors, operator overloading, and more.

## Exercises Overview

1. **Exercise 00** (`./ex00`): The basics of the `Fixed` class.
    - This exercise introduces the `Fixed` class with a default constructor, copy constructor, and a copy assignment operator. The program also defines methods to get and set the fixed-point value.
    - Example execution:
      ```sh
      ./ex00
      ```
      Output:
      ```
      Default Constructor Called
      Copy constructor called
      Copy assignment operator called
      getRawBits member function called
      getRawBits member function called
      getRawBits member function called
      0
      0
      0
      ```

2. **Exercise 01** (`./ex01`): Converting between integers and floats.
    - This exercise extends the `Fixed` class by adding constructors that convert from `int` and `float` to fixed-point values. It also adds a method to convert the fixed-point value back to `float` or `int`. Operator overloading for output is introduced.
    - Example execution:
      ```sh
      ./ex01
      ```
      Output:
      ```
      Default Constructor Called
      Int constructor called
      Float constructor called
      Copy constructor called
      Copy assignment operator called
      Float constructor called
      a is 1234.43
      b is 10
      c is 42.42
      d is 10
      a is 1234 as integer
      b is 10 as integer
      c is 42 as integer
      d is 10 as integer
      ```

3. **Exercise 02** (`./ex02`): Overloading operators.
    - This exercise expands on the `Fixed` class by implementing operator overloading. It includes comparison operators (`<`, `>`, `<=`, `>=`, `==`, `!=`), arithmetic operators (`+`, `-`, `*`, `/`), and increment/decrement operators (`++`, `--`). Additionally, static methods `min` and `max` are introduced to compare `Fixed` instances.
    - Example execution:
      ```sh
      ./ex02
      ```
      Output:
      ```
      Subject main
      -----------------
      0
      0.00390625
      0.00390625
      0.00390625
      0.0078125
      10.1016
      10.1016

      My main
      -----------------
      0.0078125
      5.05078
      6.96094
      -7.89844
      0
      1
      ```

4. **Exercise 03** (`./ex03`): Point in Triangle using BSP Algorithm.
    - This exercise introduces the `Point` class and the `bsp` (Binary Space Partitioning) algorithm to determine if a point lies strictly inside a triangle defined by three points. The `Fixed` class is used to represent coordinates, showcasing how operator overloading and fixed-point precision can be useful for geometric calculations. Note that if a point lies exactly on the edge of the triangle, the result will be `false`.
    - Example execution:
      ```sh
      ./ex03
      ```
      Output:
      ```
      0
      0
      0
      0
      1
      ```

## How to Compile
Each exercise has its own Makefile for ease of compilation. To compile an exercise, simply run:

```sh
make
```

The Makefile uses the following flags: `clang++ -Wall -Wextra -Werror -std=c++98`.

## Summary
These exercises build upon each other to reinforce understanding of fixed-point representation, operator overloading, and general object-oriented programming practices in C++. By the end of this module, learners should be comfortable with creating classes that include constructors, destructors, overloaded operators, and static methods.