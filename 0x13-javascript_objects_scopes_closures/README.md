

# `JavaScript_Objects_Scopes_Closures`

![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRtiNswythrhdDbb7EeERcaHCPe-6txyPbwfEt3gT5Clv_0RTHFolZVKLGa-EQH7V-hfzI&usqp=CAU)
#
![](https://www.scientecheasy.com/wp-content/uploads/2022/03/types-of-objects-in-javascript.png)


## How to create an object in JavaScript

In JavaScript, you can create an object using either object literals or constructor functions.

### Object Literals:

```javascript
const myObject = {
  key1: value1,
  key2: value2,
  // ...
};
```
### Constructor Functions:
```javascript
function MyObject(key1, key2) {
  this.key1 = key1;
  this.key2 = key2;
}
const myInstance = new MyObject(value1, value2);
```
## What this means
this refers to the `current object in a function or method`. Its value depends on how the function is called.

## What undefined means
In JavaScript, undefined is a primitive value automatically assigned to variables that have been declared but not assigned a value.

## Why variable type and scope are important
Variable type (data type) and scope are crucial for writing robust and maintainable code. Understanding the type of a variable helps prevent unexpected behaviors, and scoping defines where a variable is accessible.

## What is a closure
A closure is a function that "closes over" variables from its outer (enclosing) scope, retaining access to those variables even after the outer function has finished execution.

## What is a prototype
In JavaScript, each object has an associated prototype, from which it inherits properties and methods. Prototypes allow for object inheritance and are the foundation of JavaScript's object-oriented programming.

## How to inherit an object from another
You can inherit an object from another using prototypes or modern ES6 class syntax.

## Using Prototypes:
```javascript
function Parent() {
  // Parent constructor logic
}

function Child() {
  // Child constructor logic
}

Child.prototype = Object.create(Parent.prototype);
Child.prototype.constructor = Child;
```
## Using ES6 Classes:
```javascript
class Parent {
  constructor() {
    // Parent constructor logic
  }
}

class Child extends Parent {
  constructor() {
    super();
    // Child constructor logic
  }
}
```
This allows the Child object to inherit properties and methods from the Parent object.
