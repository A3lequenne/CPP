# C++ Exercises - Classes and Object-Oriented Programming

## Introduction
This repository contains a series of exercises designed as part of a C++ learning module. Each exercise aims to deepen understanding of object-oriented programming concepts, resource management, pointers and references, and other essential elements of C++. The exercises become increasingly complex, allowing learners to gradually build their skills.

## Exercises Overview
1. **Exercise 00** (`./zombie`): A simple program that demonstrates the use of dynamic memory allocation and custom class methods to manage `Zombie` objects. The program creates a heap-allocated zombie, announces it, and then properly deletes it. It also uses stack allocation for another zombie.

2. **Exercise 01** (`./zombieHorde`): An extension of the `Zombie` class, where a horde of zombies is created dynamically. This exercise demonstrates how to create multiple instances of an object in a dynamic way and iterate over them to call class methods.

3. **Exercise 02** (`./ex02`): This exercise introduces pointers and references. It showcases the differences between a pointer to a string and a reference to a string, as well as their respective uses. The program prints out the addresses and values using both.

4. **Exercise 03** (`./ex03`): This exercise introduces two classes, `HumanA` and `HumanB`, that have weapons. It demonstrates the difference between reference members (for `HumanA`) and pointer members (for `HumanB`) to handle situations where the weapon might change after object creation.

5. **Exercise 04** (`./replace`): A file manipulation program that takes a file and replaces all occurrences of a given string with another string. This exercise showcases basic file operations, string manipulation, and dynamic memory allocation.

6. **Exercise 05** (`./harl`): A program that introduces the character `Harl`, who has different complaint levels. This exercise uses function pointers and demonstrates how to handle methods via function pointers within a class.

7. **Exercise 06** (`./harlFilter`): A continuation of Harl's complaints but with a switch statement, allowing different levels of complaints to be output depending on user input. This exercise showcases decision making with control statements and the use of function pointers in a more advanced way.

## How to Compile
Each exercise has its own Makefile for ease of compilation. To compile an exercise, simply run:

```sh
make
```

The Makefile uses the following flags: `clang++ -Wall -Wextra -Werror -std=c++98`.

## Example Executions

### Exercise 00
Running the program to create and announce zombies:
```sh
./zombie
```
Output:
```
<Bob> BraiiiiiiinnnzzzZ...
Zombie Bob is dead
<Luke> BraiiiiiiinnnzzzZ...
```

### Exercise 01
Creating a horde of zombies:
```sh
./zombieHorde
```
Output:
```
<Théo0> BraiiiiiiinnnzzzZ...
<Théo1> BraiiiiiiinnnzzzZ...
<Théo2> BraiiiiiiinnnzzzZ...
...
```

### Exercise 02
Displaying string addresses and values:
```sh
./ex02
```
Output:
```
str address: 0x7ffee9b397e0
strPTR address: 0x7ffee9b397e0
strREF address: 0x7ffee9b397e0
str: HI THIS IS BRAIN
strPTR: HI THIS IS BRAIN
strREF: HI THIS IS BRAIN
```

### Exercise 03
Attacking with `HumanA` and `HumanB`:
```sh
./ex03
```
Output:
```
Bob attacks with his crude spiked club
Bob attacks with his some other type of club
Jim attacks with his crude spiked club
Jim attacks with his some other type of club
```

### Exercise 04
Replacing strings in a file:
```sh
./replace file.txt old new
```
Output (in file.txt.replace):
```
Content of the file with 'old' replaced by 'new'.
```

### Exercise 05
Complaining with Harl:
```sh
./harl
```
Output:
```
[ DEBUG ]
I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!
[ INFO ]
I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger!
[ WARNING ]
I think I deserve to have some extra bacon for free.
[ ERROR ]
This is unacceptable! I want to speak to the manager now.
```

### Exercise 06
Complaining with levels:
```sh
./harlFilter WARNING
```
Output:
```
[ WARNING ]
I think I deserve to have some extra bacon for free.
[ ERROR ]
This is unacceptable! I want to speak to the manager now.
```