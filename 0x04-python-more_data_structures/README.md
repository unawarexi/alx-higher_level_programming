
# ALX; More Data Structures: Set, Dictionary

Title:  Set, Dictionary

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

## LEARNING OBJECTIVES

### Sets:
A set is an unordered collection of unique elements. Sets are commonly used to store distinct items and perform set operations like union, intersection, and difference.

### Creating Sets:
```
my_set = {1, 2, 3}
```
### Common Set Methods:

- add(element): Adds an element to the set.
- remove(element): Removes an element from the set; raises an error if the element is not present.
- discard(element): Removes an element from the set if it is present.
- pop(): Removes and returns an arbitrary element from the set.
- union(other_set): Returns a new set containing all elements from both sets.
- intersection(other_set): Returns a new set containing elements that are common to both sets.
- difference(other_set): Returns a new set containing elements that are in the first set but not in the second.
- issubset(other_set): Checks if the set is a subset of another set.

### Lists vs. Sets:
Use lists when you need an ordered collection with duplicate elements. Use sets when you need an unordered collection of unique elements and need to perform set operations.

### Iterating Over a Set:
```
my_set = {1, 2, 3}
for element in my_set:
    print(element)
```
### Dictionaries:
A dictionary is an unordered collection of key-value pairs. Each key is unique and maps to a value. Dictionaries are commonly used to represent mappings between data.

#### Creating Dictionaries:
```
my_dict = {'key1': 'value1', 'key2': 'value2'}
```
#### Common Dictionary Methods:

- keys(): Returns a view of the keys in the dictionary.
- values(): Returns a view of the values in the dictionary.
- items(): Returns a view of the key-value pairs in the dictionary.
- get(key): Returns the value associated with the key; returns a default value if the key is not found.
- pop(key): Removes and returns the value associated with the key.

### Lists vs. Dictionaries vs. Sets:
- Lists: Use when you need an ordered collection with possible duplicate elements.
- Dictionaries: Use when you need to map keys to values for efficient data retrieval.
- Sets: Use when you need an unordered collection of unique elements and need to perform set operations.

### Iterating Over a Dictionary:
```
my_dict = {'a': 1, 'b': 2, 'c': 3}
for key, value in my_dict.items():
    print(key, value)
```
### Lambda Function:
A lambda function is a small, anonymous function defined using the lambda keyword. It can take any number of arguments and return a value. Lambda functions are often used for short, simple operations.

```
Example:
add = lambda x, y: x + y
result = add(3, 5)  # result will be 8
```
### map, reduce, and filter Functions:
These functions are part of Python's functools module:

#### map(function, iterable): Applies a function to each item in the iterable and returns an iterator.
#### filter(function, iterable): Filters elements from the iterable based on the given function's condition and returns an iterator.
#### reduce(function, iterable[, initializer]): Applies a function cumulatively to the items of the iterable, reducing it to a single value. (Note: In Python 3, reduce has been moved to the functools module.)

### Example using map and filter:
```
- numbers = [1, 2, 3, 4, 5]
- squared = map(lambda x: x ** 2, numbers)
- even_numbers = filter(lambda x: x % 2 == 0, numbers)
```
Please note that map, reduce, and filter can often be replaced with list comprehensions or generator expressions, which are more Pythonic and easier to read in many cases.
## Tech Stack

**language:** C, SHELL,  python
