# C++ Exercices - Introduction

## Introduction
This repository contains three exercises that are part of a C++ learning module. Each exercise is designed to help users practice object-oriented programming (OOP) concepts, handle dynamic data, and implement user interactions via the command line. The exercises focus on building a variety of small applications, each with different functionalities and increasing complexity.

## Exercises Overview
1. **Exercise 00** (`./megaphone`): A basic command-line program that prints a loud, predefined message if no arguments are provided or transforms input text to uppercase.
2. **Exercise 01** (`./phonebook`): A simple contact management system that allows users to add, search, and manage contacts using classes. The phonebook is limited to storing up to 8 contacts.
3. **Exercise 02** (`./ex02`): A financial account management system, where users can create accounts, make deposits and withdrawals, and track the state of all accounts with timestamps for each action.

## How to Compile
Each exercise has its own Makefile for ease of compilation. To compile an exercise, simply run:

```sh
make
```

The Makefile uses the following flags: `clang++ -Wall -Wextra -Werror -std=c++98`.

## Example Executions

### Exercise 00
Running the program without arguments:
```sh
./megaphone
```
Output:
```
* LOUD AND UNBEARABLE FEEDBACK NOISE *
```

Running the program with arguments:
```sh
./megaphone "Hello World!"
```
Output:
```
HELLO WORLD!
```

### Exercise 01
Adding a contact to the phonebook:
```sh
./phonebook
```
Commands:
```
ADD
First name: John
Last name: Doe
Nick name: JD
Phone Number: 123456789
Darkest Secret: Loves cats
```
Output:
```
Contact saved.
```

Searching for a contact:
```
SEARCH
```
Output:
```
|     Index|    Prenom|       Nom|  Nickname|
|         1|      John|       Doe|       JD |
Show info about: 1
First name : John
Last name : Doe
Nick name : JD
Phone Number : 123456789
Darkest Secret : Loves cats
```

### Exercise 02
Displaying account information:
```sh
./ex02
```
Output:
```
[20231012_101530] accounts:8;total:20874;deposits:8;withdrawals:8
[20231012_101530] index:0;amount:42;deposits:1;withdrawals:1
[20231012_101530] index:1;amount:54;deposits:1;withdrawals:1
...
```
Making a deposit:
```
Make deposit to account 1: 500
```
Output:
```
[20231012_101531] index:1;p_amount:54;deposit:500;amount:554;nb_deposits:2
```
