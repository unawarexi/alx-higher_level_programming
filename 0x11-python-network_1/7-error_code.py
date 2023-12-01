#!/usr/bin/python3
"""
Python script that in a URL, sends a request to the URL and displays the
body of the response (decoded in utf-8). It also handles HTTP errors
with status code greater than or equal to 400.
"""
import sys
import requests


if __name__ == "__main__":
    URL = sys.argv[1]

    response = requests.get(URL)
    if response.status_code >= 400:
        print(f"Error code: {response.status_code}")
    else:
        print(response.text)
