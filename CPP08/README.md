# C++ Exercises - Advanced STL and Containers

## Overview
Module 08 explores advanced usage of the Standard Template Library (STL) and custom container implementations in C++. This module includes exercises on finding elements, managing collections with dynamic resizing, and utilizing stacks in an extended way. These exercises are designed to enhance your understanding of STL components, iterators, and container customization.

## Exercises Breakdown

### ex00: EasyFind Function Template
In this exercise, you'll create a function template named `easyfind` that finds an integer in any given container (e.g., vector, list). If the integer is not found, a custom exception `NotFoundException` is thrown. This exercise highlights the use of iterators, exception handling, and generic programming.
- **Key Concepts**: Iterators, exception handling, function templates.
- **Example Execution**:
  ```sh
  ./easyfind
  ```
  **Output**:
  ```
  155 found
  Not found
  ```

### ex01: Span Class for Managing Collections
Implement a class named `Span` that can store a range of integers. You will add methods to find the shortest and longest spans between numbers in the collection. This exercise demonstrates the dynamic resizing of containers, the use of algorithms like sorting, and efficient computation of spans.
- **Key Concepts**: Dynamic containers, bounds checking, sorting algorithms, STL usage.
- **Example Execution**:
  ```sh
  ./Span
  ```
  **Output**:
  ```
  shortest span is 1
  longest span is 9999
  ```

### ex02: MutantStack Class with Iterators
In this exercise, you'll create a `MutantStack` class that extends the `std::stack` to provide iterators, allowing for traversal like other sequence containers (e.g., `std::vector`). The exercise focuses on extending an STL class and adding custom behavior to enhance its flexibility.
- **Key Concepts**: Inheriting from STL containers, iterator implementation, container adaptation.
- **Example Execution**:
  ```sh
  ./Stack
  ```
  **Output**:
  ```
  String Iterator: Five, Three, Seven hundred thirty-seven,
  
  ↓↓↓ String Stack Information ↓↓↓
  Size: 0
  Empty: true
  
  -------------------------------------------------------------------
  
  Int Iterator: 5` 3` 737`
  
  ↓↓↓ Int Stack Information ↓↓↓
  Size: 3
  Empty: false
  ```

## Compilation
To compile each exercise, use the provided `Makefile`:
```sh
make
```
The `Makefile` includes standard rules for compiling (`all`), cleaning (`clean`, `fclean`), and recompiling (`re`). The compiler is set to use C++98, with the following flags:
```sh
-Wall -Wextra -Werror -std=c++98
```

## Key Concepts to Master
- **Iterators**: Work with different types of iterators for traversing through containers.
- **Exception Handling**: Properly handle cases where elements are not found or operations are invalid.
- **Container Adaptation**: Extend standard containers to add additional functionality like iterators.
- **Dynamic Memory and Collections**: Manage collections that require dynamic resizing and span calculation.

## Conclusion
Module 08 challenges you to deepen your understanding of C++ containers, iterators, and generic programming. By completing these exercises, you'll learn to create reusable, flexible code that effectively utilizes the power of the STL and custom container adaptations.

