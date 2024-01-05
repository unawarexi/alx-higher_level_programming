# JavaScript - Web scraping


## JavaScript Programming: An Amazing Journey

JavaScript is a versatile and powerful programming language that has become an integral part of web development. Here are a few reasons why JavaScript is considered amazing:

1. **Versatility:** JavaScript can be used for both front-end and back-end development, making it a full-stack language.

2. **Asynchronous Nature:** With features like callbacks, promises, and async/await, JavaScript allows developers to handle asynchronous operations efficiently.

3. **Dynamic Typing:** The flexibility of dynamic typing enables developers to write code more quickly and adapt to changes easily.

4. **Rich Ecosystem:** JavaScript has a vast ecosystem of libraries and frameworks such as React, Angular, and Node.js, which enhance development speed and maintainability.

## Manipulating JSON Data

JSON (JavaScript Object Notation) is a lightweight data interchange format. In JavaScript, manipulating JSON data is straightforward:

1. **Parsing JSON:** Use `JSON.parse()` to convert a JSON string into a JavaScript object.

```javascript
const jsonString = '{"name": "John", "age": 30}';
const data = JSON.parse(jsonString);
console.log(data);
```

## Stringifying JSON: Use JSON.stringify() to convert a JavaScript object into a JSON-formatted string.
```javascript
const data = { name: 'John', age: 30 };
const jsonString = JSON.stringify(data);
console.log(jsonString);
```


## Using Request and Fetch API
To make HTTP requests in JavaScript, you can use the request library or the native fetch API:

- ## Request Module (Node.js):
```javascript
const request = require('request');

request('https://api.example.com/data', (error, response, body) => {
  if (!error && response.statusCode == 200) {
    console.log(body);
  }
});
```
- ## Fetch API (Browser):
```javascript
fetch('https://api.example.com/data')
  .then(response => response.json())
  .then(data => console.log(data))
  .catch(error => console.error('Error:', error));
```


## Reading and Writing a File using fs Module
In Node.js, the fs (File System) module allows you to read and write files:

- ## Reading a File:
```javascript
const fs = require('fs');

fs.readFile('example.txt', 'utf8', (err, data) => {
  if (err) {
    console.error('Error reading file:', err);
    return;
  }
  console.log('File content:', data);
});
```
- ## Writing to a File:
```javascript
const fs = require('fs');

const content = 'Hello, world!';

fs.writeFile('example.txt', content, 'utf8', (err) => {
  if (err) {
    console.error('Error writing to file:', err);
    return;
  }
  console.log('File written successfully.');
});
```