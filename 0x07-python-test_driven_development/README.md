# Testing and Documentation in Python README

## What’s an interactive test?
Interactive tests are tests that allow developers to interactively check and verify the behavior of code. In Python, you can use the `doctest` module 
to include interactive tests within your documentation. These tests are typically written within docstrings and are executed to ensure code examples in the documentation are accurate.

```python
def add(a, b):
    """
    Adds two numbers.

    >>> add(2, 3)
    5
    >>> add(0, 0)
    0
    """
    return a + b
```

## Why tests are important?
Tests are crucial for ensuring the correctness and reliability of your code. They help catch and prevent bugs, verify that code meets its specifications, 
and ensure that changes or updates do not introduce regressions. Tests also improve code maintainability and provide documentation for how code should be used.

## How to write Docstrings to create tests?
To create tests using docstrings, you can use the doctest module. Write example inputs and expected outputs within the docstring, and then use doctest.testmod() to run the tests.

```python
def multiply(a, b):
    """
    Multiplies two numbers.

    >>> multiply(2, 3)
    6
    >>> multiply(0, 5)
    0
    """
    return a * b
```
## How to write documentation for each module and function?
You can write documentation for modules and functions using docstrings. Use triple-quoted strings to provide a detailed description of the module or function's purpose,
 input parameters, return values, and usage examples.

```python
def square(x):
    """
    Calculates the square of a number.

    Args:
        x (int): The number to be squared.

    Returns:
        int: The square of the input number.

    Example:
        >>> square(4)
        16
    """
    return x ** 2
```
## What are the basic option flags to create tests?
The basic option flags for running tests in Python using the unittest framework include:

- ` -v` or `--verbose`: Provides more detailed test output.
-  `-f` or `--failfast`: Stops test execution on the first failure.
-  `-t` or `--top-level-directory`: Specifies the top-level directory of the test suite.

```bash
python -m unittest -v -f -t my_tests_directory
```
## How to find edge cases?
Finding edge cases involves identifying inputs or scenarios that are at the "edges" 
or boundaries of your code's expected behavior. This can include 
minimum and maximum values, empty inputs, and unusual or unexpected inputs.
Consider these cases when designing your tests to ensure robust code.

```python
def divide(a, b):
    """
    Divides two numbers.

    Args:
        a (int): The dividend.
        b (int): The divisor.

    Returns:
        float: The result of the division.

    Examples:
        >>> divide(10, 2)
        5.0
        >>> divide(0, 5)
        0.0
        >>> divide(5, 0)  # Handling division by zero
        'Cannot divide by zero.'
    """
    if b == 0:
        return 'Cannot divide by zero.'
    return a / b
```
- Testing and documentation are essential practices in software development that enhance code quality, reliability, and maintainability.

- kotlin

Feel free to use this README as a reference for testing and documentation practices in Python.

