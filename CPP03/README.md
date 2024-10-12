# C++ Exercices - Inheritance and Virtual Base Classes

## Introduction
This repository contains a set of exercises focusing on inheritance, including multiple inheritance, virtual base classes, and utilizing constructors effectively in C++. The exercises build upon the concepts of class inheritance, constructors, destructors, and feature various derived classes. The final goal is to create a "DiamondTrap" class that inherits from two different classes, demonstrating the complexities and techniques involved in managing inheritance relationships.

## Exercises Overview

1. **Exercise 00** (`./ex00`): Basic ClapTrap
   - This exercise introduces the `ClapTrap` class, which includes constructors, destructors, and methods for attacking, taking damage, and repairing. It sets up the basic attributes: `name`, `health`, `energy`, and `damage`. The `ClapTrap` interacts with a target by calling `attack()`, reducing its `health` via `takeDamage()`, or recovering with `beRepaired()`. The main file tests various scenarios of damage and repair.
   - Example execution:
     ```sh
     ./ex00
     ```
     Output:
     ```
     ClapTrap constructor called
     cl4ptp attacks Handsome Jack, causing 0 points of damage!
     cl4ptp has taken 6 damage
     cl4ptp has 4 damage repaired
     cl4ptp has taken 3 damage
     cl4ptp has 8 damage repaired
     cl4ptp is dead
     ```

2. **Exercise 01** (`./ex01`): Derived Class ScavTrap
   - In this exercise, we introduce the `ScavTrap` class, derived from `ClapTrap`. `ScavTrap` has additional functionality with the `guardGate()` method, and different initial values for `health`, `energy`, and `damage`. The `ScavTrap` constructor is called alongside the `ClapTrap` constructor to properly set up the object, showing how derived classes inherit and extend functionality.
   - Example execution:
     ```sh
     ./ex01
     ```
     Output:
     ```
     ScavTrap constructor called
     sc4vtp attacks Handsome Jack, causing 20 points of damage!
     sc4vtp has taken 6 damage
     sc4vtp has 4 damage repaired
     sc4vtp has taken 3 damage
     sc4vtp entered Gate Keeper mode!!!
     sc4vtp has 8 damage repaired
     sc4vtp is dead
     ```

3. **Exercise 02** (`./ex02`): Introducing FragTrap
   - This exercise adds another derived class, `FragTrap`, which also inherits from `ClapTrap`. `FragTrap` brings new attributes and a special method, `highFivesGuys()`, demonstrating the ability to extend the behavior of the base class even further. The constructors of `FragTrap` and `ClapTrap` are used to properly initialize objects of `FragTrap`.
   - Example execution:
     ```sh
     ./ex02
     ```
     Output:
     ```
     FragTrap constructor called
     fr4gtp attacks Handsome Jack, causing 30 points of damage!
     fr4gtp has taken 6 damage
     fr4gtp has 4 damage repaired
     fr4gtp has taken 3 damage
     Hey guys! Give me a high five!!!
     fr4gtp has 8 damage repaired
     fr4gtp is dead
     ```

4. **Exercise 03** (`./ex03`): DiamondTrap - Multiple Inheritance
   - The `DiamondTrap` class is introduced, which inherits from both `ScavTrap` and `FragTrap`. The challenge here is to manage inheritance from two different classes that both derive from `ClapTrap`. To solve the "diamond problem", `ScavTrap` and `FragTrap` inherit from `ClapTrap` using virtual inheritance. `DiamondTrap` has a unique `whoAmI()` method that displays both its own name and the `ClapTrap` name, demonstrating how to manage multiple inherited properties.
   - Example execution:
     ```sh
     ./ex03
     ```
     Output:
     ```
     DiamondTrap constructor called
     di4mondtp attacks Handsome Jack, causing 20 points of damage!
     di4mondtp has taken 6 damage
     di4mondtp has 4 damage repaired
     di4mondtp has taken 3 damage
     di4mondtp entered Gate Keeper mode!!!
     Hey guys! Give me a high five!!!
     I am di4mondtp and for ClapTrap, I am di4mondtp_clap_name
     di4mondtp has 8 damage repaired
     di4mondtp is dead
     ```

## How to Compile
Each exercise has its own Makefile for easy compilation. To compile an exercise, simply run:

```sh
make
```

The Makefile uses the following flags: `clang++ -Wall -Wextra -Werror -Wshadow -Wno-shadow -I. -std=c++98`.

## Summary
These exercises illustrate the power and complexity of inheritance in C++. From simple base classes (`ClapTrap`) to more advanced derived classes (`ScavTrap`, `FragTrap`, and `DiamondTrap`), you will learn how to manage constructors, destructors, and the challenges of multiple inheritance. By the end of these exercises, you'll understand how to use virtual inheritance to resolve ambiguity in complex inheritance hierarchies.

