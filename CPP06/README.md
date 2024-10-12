# C++ Exercices - Casting and Type Identification

## Overview
Module 06 dives into different types of casting in C++, focusing on static, dynamic, and reinterpret casts. The exercises in this module will guide you through type conversions and demonstrate how to handle different data types effectively, using themes like data serialization, class identification, and conversions.

## Exercises Breakdown

### ex00: Conversion Class
In this exercise, you'll create a `Conversion` class that takes a string input representing a value and converts it into multiple types, such as `char`, `int`, `float`, and `double`. The input is validated and converted to the appropriate type, with exceptions raised for invalid conversions.
- **Key Concepts**: Conversion functions, type casting, handling special cases like `nan` and `inf`, static type checking.
- **Example Execution**:
  ```sh
  ./convert 42
  ```
  **Output**:
  ```
  char: '*'
  int: 42
  float: 42.0f
  double: 42.0
  ```

### ex01: Serialization of Data Structures
Implement a `Serializer` class that can serialize and unserialize a `Data` structure. The class should convert pointers to `uintptr_t` and back to pointers, allowing you to persist and recover data. You'll explore reinterpret casting and how to safely serialize data.
- **Key Concepts**: Serialization, reinterpret casting, pointer manipulation.
- **Example Execution**:
  ```sh
  ./serialize
  ```
  **Output**:
  ```
  Here is the original struct:
      address: 0x7ffeefbff5c0
      name: Hubert deLabatte
      age: 42
      address next: 0x0
  Here is the reserialized struct:
      address: 0x7ffeefbff5c0
      name: Hubert deLabatte
      age: 42
      address next: 0x0
  ```

### ex02: Identifying Base Classes
In this exercise, you will implement the `Base` class and its derived classes `A`, `B`, and `C`. You'll create functions to randomly instantiate one of these derived classes and identify them, both through pointers and references, using `dynamic_cast`.
- **Key Concepts**: Inheritance, dynamic casting, type identification, runtime polymorphism.
- **Example Execution**:
  ```sh
  ./identify
  ```
  **Output**:
  ```
  A is the identified type
  A is the identified type

  B is the identified type
  B is the identified type
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
- **Static vs Dynamic Casting**: Understand when and why to use `static_cast`, `dynamic_cast`, `reinterpret_cast`, and `const_cast`.
- **Exception Handling**: Handle errors when type conversions fail.
- **Polymorphism**: Work with base and derived classes and understand the difference between compile-time and runtime type identification.
- **Serialization**: Learn the basics of data serialization and unserialization for pointer manipulation.

## Conclusion
Module 06 is a hands-on exploration of type conversions and casting in C++. By completing these exercises, you will gain a solid understanding of type safety, serialization, and how to properly handle casting between different types in C++.

