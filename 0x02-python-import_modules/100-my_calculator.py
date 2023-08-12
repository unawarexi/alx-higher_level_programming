#!/usr/bin/python3
from calculator_1 import add, sub, mul, div
import sys

if __name__ == "__main__":

    if len(sys.argv) != 4:
        print("mode: ./100-my_calculator.py <a> <operator> <b>")
        sys.exit(1)

    if sys.argv[2] not in "+-*/":
        print("Unfamiliar operator detected. Operators youll use include +, -, *, and /.")
        sys.exit(1)

    a = int(sys.argv[1])
    b = int(sys.argv[3])

    print(f"{a} {sys.argv[2]} {b} = ", end="")
    if sys.argv[2] == '+':
        print(f"{add(a, b)}")
    elif sys.argv[2] == '-':
        print(f"{sub(a, b)}")
    elif sys.argv[2] == '*':
        print(f"{mul(a, b)}")
    elif sys.argv[2] == '/':
        print(f"{div(a, b)}")
