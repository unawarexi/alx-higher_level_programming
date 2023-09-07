# Python Concepts README

## What is an object?
In Python, an object is a fundamental unit that represents a data structure or instance of a class. Objects have attributes and methods associated with them.

## What is the difference between a class and an object or instance?
A class is a blueprint or template for creating objects, while an object (or instance) is a concrete instantiation of a class. Classes define the structure and behavior of objects.

## What is the difference between immutable object and mutable object?
Immutable objects cannot be modified after creation, while mutable objects can be changed. For example, tuples are immutable, and lists are mutable in Python.

## What is a reference?
A reference in Python is a way to access an object's memory location. Variables in Python store references to objects rather than the objects themselves.

## What is an assignment?
Assignment in Python is the process of binding a value to a variable. It associates a name (variable) with an object.

## What is an alias?
An alias in Python refers to multiple variables that refer to the same object. When you have two or more variables pointing to the same object, they are aliases of each other.

## How to know if two variables are identical?
You can use the `is` keyword to check if two variables reference the same object. For example, `x is y` will return `True` if `x` and `y` refer to the same object.

## How to know if two variables are linked to the same object?
You can use the `is` keyword, as mentioned above, to check if two variables are linked to the same object in Python.

## How to display the variable identifier (which is the memory address in the CPython implementation)?
You can use the `id()` function to retrieve the memory address (identifier) of an object. For example, `id(x)` will return the memory address of the object referred to by variable `x`.

## What is mutable and immutable?
Mutable objects can be modified after creation, while immutable objects cannot be changed. Immutable objects include numbers, strings, and tuples, while lists and dictionaries are mutable.

## What are the built-in mutable types?
Python provides several built-in mutable types, including lists, dictionaries, and sets.

## What are the built-in immutable types?
Python offers built-in immutable types such as numbers (integers, floats), strings, and tuples.

## How does Python pass variables to functions?
Python passes variables to functions using a mechanism known as "call by object reference." This means that when you pass a variable to a function, you're actually passing a reference to the object it points to. Any modifications made to the object within the function will affect the original object outside the function.


