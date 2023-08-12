
# ALX 0x02. Python - import & modules Project

Title: import & modules


## Authors

- [@unawarexi](https://www.github.com/unawarexi)


## Why Python programming is awesome:
Python is considered awesome for several reasons:

- Readability and Simplicity: Python's syntax is easy to read and write, making it an excellent language for beginners and experienced developers alike.

- Versatility: Python can be used for a wide range of applications, from web development to scientific computing, data analysis, machine learning, and more.

- Vast Standard Library: Python comes with a comprehensive standard library that provides ready-to-use modules and functions for various tasks, reducing the need to reinvent the wheel.

- Large Community and Support: Python has a vibrant community of developers, which means you can find ample resources, libraries, and tutorials online.

- Cross-Platform Compatibility: Python programs can run on multiple operating systems without modification.

- Dynamic Typing: Python uses dynamic typing, making it flexible and enabling rapid development.

### How to import functions from another file:

Let's say you have a file named my_module.py containing functions you want to import.

``` # my_module.py

def greet(name):
    return f"Hello, {name}!"

def multiply(a, b):
    return a * b
```
### To import functions from this file into another Python script:
#### main.py

``` 
from my_module import greet, multiply

result = greet("Alice")
print(result)

product = multiply(5, 3)
print(product)
```
### How to use imported functions:

Once you've imported functions from another file/module, you can use them just like any other function:

``` 
result = greet("Bob")
print(result)
```
### How to create a module:

A module is a file containing Python definitions and statements. To create a module, simply create a .py file and define functions, classes, or variables within it.

### How to use the built-in function dir():

The dir() function returns a list of valid attributes for a given object. You can use it to explore the properties and methods of an object. For example:

``` 
my_list = [1, 2, 3]
print(dir(my_list))
```
### How to prevent code in your script from being executed when imported:

In Python, when a script is imported as a module, all the code at the top level of the script is executed. To prevent specific code from running when the script is imported, you can use the if __name__ == "__main__": construct.
```
def my_function():
    # ...

if __name__ == "__main__":
    # This code will only run if the script is executed directly, not when imported
    my_function()
```
### How to use command line arguments with your Python programs:

You can access command-line arguments using the sys.argv list from the sys module. Here's a basic example:
```
import sys

# The first command-line argument (index 0) is the script name itself
script_name = sys.argv[0]
# The following arguments are provided by the user
user_arguments = sys.argv[1:]

print("Script Name:", script_name)
print("User Arguments:", user_arguments)
```
When you run the script from the command line, you can pass arguments like this:

``` python my_script.py arg1 arg2 arg3 ```
## Tech Stack

**language:** SHELL,  python
