# Python HTTP Requests README

## Fetching Internet Resources with urllib

The Python package `urllib` provides a set of modules to work with URLs. To fetch internet resources, you can use `urllib.request`:

```python
import urllib.request


url = "https://example.com"
response = urllib.request.urlopen(url)
data = response.read()
print(data.decode('utf-8'))
```

## Decoding urllib Body Response
You can decode the body response using the decode method with the appropriate encoding. In the example above, 'utf-8' is used as the encoding.

## Using the Python Package Requests
The requests package simplifies HTTP requests compared to urllib. Install it using:

```bash
pip install requests
```


## Making HTTP GET Request
```python
import requests

url = "https://example.com"
response = requests.get(url)
print(response.text)
```

## Making HTTP POST/PUT/etc. Request
```python
import requests

url = "https://example.com"
payload = {"key": "value"}
response = requests.post(url, data=payload)
print(response.text)
```

## Fetching JSON Resources
```python
import requests

url = "https://jsonplaceholder.typicode.com/posts/1"
response = requests.get(url)
data = response.json()
print(data)
```

## Manipulating Data from an External Service
Once you have fetched data, you can manipulate it according to your needs. For example:

```python
import requests

url = "https://jsonplaceholder.typicode.com/posts"
response = requests.get(url)
posts = response.json()

# Extracting titles from posts
titles = [post['title'] for post in posts]
print(titles)
```
Remember to handle exceptions and errors appropriately in a production environment. 
Check the documentation for each package for more advanced usage.
