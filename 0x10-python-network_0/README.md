# Understanding Web Concepts README

## What a URL Is

A Uniform Resource Locator (URL) is a reference or address used to access resources on the internet. It typically consists of a protocol (e.g., HTTP or HTTPS), domain name, and additional path or parameters.

## What HTTP Is

Hypertext Transfer Protocol (HTTP) is an application protocol for distributed, collaborative, and hypermedia information systems. It is the foundation for data communication on the World Wide Web.

## How to Read a URL

A URL is read from left to right, starting with the protocol, followed by the domain, path, query parameters, and fragments if present.

## The Scheme for a HTTP URL

The scheme for an HTTP URL is usually "http" or "https" for secure connections.

## What a Domain Name Is

A domain name is a human-readable label assigned to an IP address, making it easier to locate resources on the internet. For example, "example.com" is a domain name.

## What a Sub-Domain Is

A sub-domain is a part of a larger domain. For instance, in "blog.example.com," "blog" is a sub-domain of "example.com."

## How to Define a Port Number in a URL

Port numbers can be specified in a URL after the domain, using the format ":port," e.g., "https://example.com:8080."

## What a Query String Is

A query string is a set of parameters added to a URL, typically after a "?" symbol, to pass data to a web server.

## What an HTTP Request Is

An HTTP request is a message sent by a client to request information from a server. It includes a request method, headers, and optionally a message body.

## What an HTTP Response Is

An HTTP response is a message sent by a server in response to an HTTP request. It includes a status code, headers, and optionally a message body.

## What HTTP Headers Are

HTTP headers are key-value pairs sent in both requests and responses. They convey information about the message or the server.

## What the HTTP Message Body Is

The HTTP message body contains the data being sent in an HTTP request or response, such as form data or JSON payloads.

## What an HTTP Request Method Is

An HTTP request method defines the action to be performed for a given resource. Common methods include GET, POST, PUT, and DELETE.

## What an HTTP Response Status Code Is

An HTTP response status code indicates the outcome of a request. For example, a status code of 200 means success, while 404 indicates not found.

## What an HTTP Cookie Is

An HTTP cookie is a small piece of data stored on the user's computer by the web browser. It is often used to track user sessions and preferences.

## How to Make a Request with cURL

cURL is a command-line tool for making HTTP requests. Example usage:

```bash
curl https://example.com
```
## What Happens When You Type google.com in Your Browser (Application Level)
When you type "google.com" in your browser, an application-level process initiates a DNS lookup, establishes a TCP connection, sends an HTTP request to the server, 
receives an HTTP response, and renders the webpage.

