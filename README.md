# Scientific Calculator in C++

## Overview

This project is a **Scientific Calculator** implemented in C++. It provides a command-line interface to perform various mathematical operations, including basic arithmetic, powers, roots, logarithms, and trigonometric functions. The calculator is menu-driven and user-friendly, making it ideal for learning or simple scientific calculations.

## Features

- **Basic Arithmetic:** Addition, Subtraction, Multiplication, Division
- **Power Function:** Calculate x raised to the power y
- **Square Root:** Compute the square root of a number
- **Logarithms:** Base-10 and natural logarithm (ln)
- **Trigonometry:** Sine, Cosine, and Tangent (input in degrees)
- **Error Handling:** Checks for invalid input such as division by zero or negative values for square roots/logarithms

## Usage

1. **Clone or Download the Repository**
2. **Compile the Source Code:**
   ```sh
   g++ scientific_calculator.cpp -o calc -lm
   ```
3. **Run the Calculator:**
   ```sh
   ./calc
   ```
4. **Select Operation:** Choose an operation from the menu by entering the corresponding number.
5. **Input Numbers:** Enter the required numbers as prompted.
6. **View Result:** The calculator will display the result. You can perform multiple operations until you choose to exit.

## Example

```
--- Scientific Calculator ---
1. Addition
2. Subtraction
...
12. Exit
Choose an operation (1-12): 1
Enter first number: 5
Enter second number: 3
Result: 8
```

## Requirements

- C++ compiler (e.g., g++, clang++)
- Compatible with Linux, macOS, and Windows

## Customization

You can add more functions or improve the UI as needed. The code is modular and easy to extend.

## License

This project is open-source and available under the [MIT License](LICENSE).

## Author
Abdul Salim Sulemana
Developed by [Souzek-Androiddev](https://github.com/Souzek-Androiddev)
