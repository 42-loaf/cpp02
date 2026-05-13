# CPP Module 02

## Description

CPP Module 02 is part of the C++ curriculum at 42 School and introduces several core concepts of object-oriented programming in C++. The module focuses on operator overloading, fixed-point arithmetic, and the Orthodox Canonical Form.

The objective of this project is to understand how custom classes can behave similarly to built-in types while respecting proper object lifecycle management and C++98 standards.

Through multiple exercises, this module explores:

- Canonical class form
- Fixed-point number representation
- Operator overloading
- Copy semantics
- Const correctness
- Static member functions
- Basic computational geometry

### Project Structure

```text
cpp02/
├── ex00/
├── ex01/
├── ex02/
├── ex03/
└── README.md
```

Each exercise is independent and contains its own source files and Makefile.

Exercises
ex00

Introduction to the Orthodox Canonical Form through the implementation of a simple fixed-point number class.

ex01

Extension of the fixed-point class with conversions between integers, floating-point values, and string output support.

ex02

Implementation of arithmetic, comparison, and increment/decrement operators for the fixed-point class.

ex03

Use of fixed-point arithmetic to determine whether a point lies inside a triangle.

---

## Instructions

Compilation flags:

```bash
-Wall -Wextra -Werror -std=c++98
```

Makefile Rules
```bash
make        # Compile the project
make clean  # Remove object files
make fclean # Remove object files and executable
make re     # Rebuild the project
```

### Key Concepts
Orthodox Canonical Form

A class following the Orthodox Canonical Form implements:

Default constructor
Copy constructor
Copy assignment operator
Destructor

This ensures proper object copying and destruction behavior.

Fixed-Point Arithmetic

Fixed-point numbers represent fractional values using integer storage internally, allowing predictable precision and efficient arithmetic operations.

Operator Overloading

Operator overloading allows custom classes to support operators such as:

```C++
+, -, *, /, >, <, ==, ++, --
```

This makes user-defined types behave more naturally and improves code readability.

---

## Resources

Tutorials and Articles
Learn C++
https://www.learncpp.com/
Fixed-Point Arithmetic
https://en.wikipedia.org/wiki/Fixed-point_arithmetic
Operator Overloading in C++
https://www.geeksforgeeks.org/operator-overloading-cpp/