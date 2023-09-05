# Object-Oriented Programming (OOP) Readme

This readme provides answers to commonly asked questions about Object-Oriented Programming (OOP) concepts in Python.

## What is OOP?

Object-Oriented Programming (OOP) is a programming paradigm that organizes code into reusable, self-contained objects, each representing a real-world entity or concept. OOP promotes the use of classes and objects to structure and manage code.

## "First-Class Everything"

In Python, "first-class everything" refers to the language's feature of treating functions, classes, and objects as first-class citizens. This means they can be assigned to variables, passed as arguments to functions, and returned from functions.

## What is a Class?

A class is a blueprint or a template for creating objects in Python. It defines the attributes (variables) and methods (functions) that its objects will have.

## What is an Object and an Instance?

An object is an instance of a class. It is a concrete realization of the class blueprint, with its own set of attributes and the ability to call the methods defined in the class.

## What is the Difference Between a Class and an Object or Instance?

A class is the blueprint that defines the structure and behavior of objects. An object (or instance) is a specific instance created from a class. Multiple objects can be created from the same class, each having its own state and behavior.

## What is an Attribute?

An attribute is a variable that holds data associated with an object. Attributes define the characteristics or properties of an object.

## What Are and How to Use Public, Protected, and Private Attributes?

- Public attributes are accessible from anywhere, both inside and outside the class.
- Protected attributes are denoted with a single underscore (_) and should be considered non-public but not enforced. It is a naming convention.
- Private attributes are denoted with a double underscore (__) and are name-mangled to make them harder to access from outside the class.

## What is `self`?

`self` is a reference to the instance of a class within its methods. It allows you to access and modify the object's attributes and call its methods.

## What is a Method?

A method is a function defined within a class. It operates on the attributes of the class and can perform actions specific to that class.

## What is the Special `__init__` Method and How to Use It?

`__init__` is a special method (constructor) called when an object is created from a class. It initializes object attributes. It takes `self` as its first parameter and can also accept other parameters to set initial values.

## What is Data Abstraction, Data Encapsulation, and Information Hiding?

- Data Abstraction: Hiding complex implementation details and exposing only necessary features to users.
- Data Encapsulation: Bundling data (attributes) and methods (functions) that operate on that data into a single unit (class).
- Information Hiding: Restricting access to certain attributes or methods to prevent unauthorized changes.

## What is a Property?

A property is a special attribute that uses getter and setter methods to control access to an object's data. It allows you to execute code when getting or setting the property's value.

## What is the Difference Between an Attribute and a Property in Python?

Attributes are simple data storage locations, while properties provide control over attribute access by using getter and setter methods.

## What is the Pythonic Way to Write Getters and Setters in Python?

Use `@property` for getter methods and `@<attribute>.setter` for setter methods to create properties.

## What are the special `__str__` and `__repr__` methods and how to use them?

- `__str__` returns a human-readable string representation of an object.
- `__repr__` returns an unambiguous and ideally executable string representation.

## What is the Difference Between `__str__` and `__repr__`?

`__str__` is used for the informal, user-friendly representation, while `__repr__` is used for the formal, developer-oriented representation.

## What is a Class Attribute?

A class attribute is an attribute that belongs to the class itself rather than to its instances. All objects created from the class share the same class attributes.

## What is the Difference Between an Object Attribute and a Class Attribute?

An object attribute belongs to a specific object and is unique to that object. A class attribute belongs to the class and is shared among all objects created from that class.

## What is a Class Method?

A class method is a method that is bound to the class and not the instance. It can access and modify class-level attributes but not instance-specific attributes.

## What is a Static Method?

A static method is a method that is defined within a class but doesn't access or modify instance or class-specific data. It's usually used for utility functions that are related to the class.

## How to Dynamically Create Arbitrary New Attributes for Existing Instances of a Class

You can dynamically create attributes for existing instances by directly assigning values to them using dot notation or by using the `setattr()` function.

## How to Bind Attributes to Objects and Classes

Attributes are bound to objects by assignment within methods or to classes by defining them within the class but outside methods.

## What is and What Does Contain `__dict__` of a Class and of an Instance of a Class?

`__dict__` is a dictionary that contains the attributes of an object or class. For a class, it stores class attributes, and for an instance, it stores both class attributes and instance-specific attributes.

## How Does Python Find the Attributes of an Object or Class?

Python first searches for the attribute in the instance's namespace. If not found, it then looks in the class's namespace. If still not found, it searches in the base classes (if inheritance is used).

## How to Use the `getattr()` Function

The `getattr()` function is used to get the value of an attribute of an object. It takes the object and the attribute name as arguments and can provide a default value if the attribute doesn't exist.

