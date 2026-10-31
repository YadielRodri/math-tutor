# Math Tutor

A C++ console program created as a four-person CSC-120 group project. It performs five arithmetic operations and validates operators and numeric input before calculating a result.

## Features

- Addition, subtraction, multiplication, division, and remainder
- Operator validation
- Numeric-input validation
- Protection against division by zero
- Whole-number validation for remainder calculations
- Clear console menu and result output

## Example output

Sample calculation (banner omitted):

```text
Enter operator: +
Enter first number: 8
Enter second number: 5
Result: 13
```

The program also handles invalid operators and division by zero.

## Concepts Practiced

- Conditional statements
- Character-based menu selection
- Console input and output
- Type conversion
- Input validation
- Collaborative programming

## Build and Run

```bash
g++ -std=c++17 math_tutor.cpp -o math_tutor
./math_tutor
```

On Windows, run `math_tutor.exe` after compiling.

## Course

CSC-120 Introduction to Computer Science and Object-Oriented Programming at Bunker Hill Community College.
