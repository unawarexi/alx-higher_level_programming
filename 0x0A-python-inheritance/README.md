# Object-Oriented Programming Concepts and Usage

This README provides explanations and examples for various Object-Oriented Programming (OOP) concepts and common operations in Python.

## Superclass, Baseclass, or Parentclass

In OOP, a superclass, baseclass, or parentclass is a class from which other classes (subclasses) inherit properties and behaviors. It serves as a template or blueprint for creating new classes.

## Subclass

A subclass is a class that inherits properties and behaviors from a superclass or baseclass. It can extend or override the functionality of the superclass while adding its own unique features.

## Listing Attributes and Methods

To list all attributes and methods of a class or instance, you can use the `dir()` function or access the `__dict__` attribute for instances.

```python
class MyClass:
    def __init__(self):
        self.attribute1 = 42

    def method1(self):
        pass

# Listing attributes and methods of MyClass
print(dir(MyClass))
```
## Adding New Attributes to an Instance
You can add new attributes to an instance at any time by simply assigning a value to a new attribute name.

```python
obj = MyClass()
obj.new_attribute = "Hello, World!"
```
## Inheriting a Class
To inherit a class from another, define the subclass and specify the superclass in parentheses after the subclass name.

```python
class Subclass(Superclass):
    pass
```
## Defining a Class with Multiple Base Classes
In Python, multiple inheritance is possible by specifying multiple base classes in the class definition.

```python
class ChildClass(Parent1, Parent2):
    pass
```
## Default Class Inheritance
Every class in Python implicitly inherits from the object class, which is the default base class for all classes.

## Method or Attribute Override
To override a method or attribute inherited from a base class in a subclass, redefine the method or attribute with the same name in the subclass.

```python
class Subclass(Superclass):
    def method1(self):
        # Override the method
        pass
```
## Inherited Attributes and Methods
Subclasses inherit all attributes and methods from their superclasses unless they are overridden in the subclass. Subclasses can access these inherited members.

## Purpose of Inheritance
The purpose of inheritance in OOP is to promote code reuse, abstraction, and the organization of code into a hierarchy. It allows for the creation of specialized classes while maintaining a common base.

## Using `isinstance`,  `issubclass`, `type, and super`
`isinstance(object, class)`: Checks if an object is an instance of a specified class.
`issubclass(class, classinfo)`: Checks if a class is a subclass of a specified class or class tuple.
`type(object)`: Returns the type (class) of an object.
`super()`: Returns a temporary object of the superclass, allowing you to call its methods.
Example:

```python
if isinstance(obj, MyClass):
    print("obj is an instance of MyClass")

if issubclass(ChildClass, Parent1):
    print("ChildClass is a subclass of Parent1")

print(type(obj))  # Prints the type of obj
```
Feel free to refer to this README for a quick reference to OOP concepts and usage in Python.
