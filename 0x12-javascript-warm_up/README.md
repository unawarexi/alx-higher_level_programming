



# JavaScript Basics README

## Why JavaScript programming is amazing

JavaScript is an amazing programming language due to its versatility and widespread use. It is primarily known as the scripting language for web development, allowing developers to create dynamic and interactive content on websites. Its ability to run on both the client and server side, along with a vast ecosystem of libraries and frameworks, makes it a powerful language for building modern web applications.



### `Background Context`
![](https://iwearshorts.com/wp-content/uploads/2015/05/javascript-site-1070x580.jpg)
- #### `Versatile:` Can be used for a variety of purposes, from creating simple animations to developing complex web applications.
- #### `Compatibility:` Can run on any browser or platform, making it accessible to a broad audience.
- #### `Front-end integration:` Can interact with HTML and CSS, making it an essential part of front-end web development.
- #### `Constantly evolving:` New updates and features are released regularly, ensuring that it remains relevant and adaptable to changing technology trends.
- #### `Dynamic:` Allows for real-time interactions and immediate feedback, making for a seamless user experience.
- #### `Large community:` A vast community of developers provides support, resources, and a wealth of knowledge and expertise.


## How to run a JavaScript script

To run a JavaScript script, you can use a web browser, a server-side environment like Node.js, or an integrated development environment (IDE). For browser execution, simply include the script in an HTML file and open it in a web browser. For server-side execution with Node.js, use the command `node script.js` in the terminal, where `script.js` is the name of your JavaScript file.

## How to create variables and constants

Variables and constants in JavaScript are declared using the `var`, `let`, or `const` keywords. For example:

```javascript
// Variable declaration
var myVariable = 'Hello';

// Constant declaration
const pi = 3.14;
```

## Differences between var, const, and let
- #### `var` has function-level scope, while ` let` and `const` have block-level scope.
- #### Variables declared with const cannot be reassigned, while variables declared with let and var can be.
- #### const requires an initial value at the time of declaration.

## Data types available in JavaScript
JavaScript has several data types, including:

### Primitive types: `string,` `number`, `boolean`, `null`, `undefined`
### Object types: `object`, `array`, `function`


## How to use if, if ... else statements
```javascript
var x = 10;

if (x > 5) {
  console.log('x is greater than 5');
} else {
  console.log('x is not greater than 5');
}
```

## How to use comments
Comments in JavaScript can be added using // for single-line comments or /* */ for multi-line comments.

```javascript
// This is a single-line comment

/*
   This is a
   multi-line comment
*/
```

## How to assign values to variables
Values are assigned to variables using the assignment operator =.

```javascript
var myVariable = 'Hello, World!';
```


## How to use while and for loops
```javascript
// While loop
var i = 0;
while (i < 5) {
  console.log(i);
  i++;
}

// For loop
for (var j = 0; j < 5; j++) {
  console.log(j);
}
```


## How to use break and continue statements
```javascript
for (var i = 0; i < 10; i++) {
  if (i === 5) {
    break; // exits the loop when i is 5
  }
  console.log(i);
}

for (var i = 0; i < 10; i++) {
  if (i === 5) {
    continue; // skips the rest of the loop and continues with the next iteration when i is 5
  }
  console.log(i);
}
```

## What is a function and how do you use functions
A function is a reusable block of code that performs a specific task. Functions are declared using the function keyword.

```javascript
function greet(name) {
  console.log('Hello, ' + name + '!');
}

greet('John');
```


## What does a function that does not use any return statement return
A function without a return statement returns undefined by default.

```javascript
function doSomething() {
  // no return statement
}

console.log(doSomething()); // Outputs: undefined

```
## Scope of variables
Scope refers to the visibility and accessibility of variables. JavaScript has function scope for variables declared with `var` 
and block scope for variables declared with `let and const`.

## Arithmetic operators and how to use them
```javascript
var x = 5;
var y = 2;

console.log(x + y); // Addition
console.log(x - y); // Subtraction
console.log(x * y); // Multiplication
console.log(x / y); // Division
console.log(x % y); // Modulus
```

## How to manipulate a dictionary
JavaScript objects are often used as dictionaries. Here's an example of manipulating a dictionary:

```javascript
var person = {
  name: 'John',
  age: 30,
  city: 'New York'
};

// Accessing values
console.log(person.name); // Outputs: John

// Modifying values
person.age = 31;

// Adding a new key-value pair
person.gender = 'Male';

// Deleting a key-value pair
delete person.city;
```

## How to import a file
In JavaScript, file import/export is commonly done using modules. For example:

```javascript
// File: utils.js
export function add(a, b) {
  return a + b;
}

// File: main.js
import { add } from './utils.js';

console.log(add(2, 3)); // Outputs: 5
```