# Scientific Calculator in C++

## 📑 Table of Contents
- [📋 Overview](#overview)
- [🛠 Tech Stack](#-tech-stack)
- [🚀 Getting Started](#-getting-started)
- [💻 Setup & Run Instructions](#-setup--run-instructions)
- [📸 Screenshots](#-screenshots)
- [🔍 Approach](#-approach)
- [👤 Author](#-author)

## 📋 Overview
A menu-driven scientific calculator built with C++ for the command line. Supports arithmetic, powers, roots, logarithms, and trigonometric functions with error handling for invalid inputs. Easy to use, compile, and extend for basic scientific calculations.

## 🛠 Tech Stack
- **C++**: Main implementation language
- **Java**: (Example or integration purposes)
- **Terminal/CLI**: Interface

## 🚀 Getting Started

### Clone the Repository
```sh
git clone https://github.com/souzek-androiddev/ScientificCalculator.git
```

## 💻 Setup & Run Instructions

1. **Compile the Application**
   ```sh
   g++ App.cpp -o calc -lm
   ```
2. **Run the Calculator**
   ```sh
   ./calc
   ```
   > Replace `App.cpp` with the actual source file name if different.

## 📸 Screenshots

![alt text](<https://github.com/Souzek-Androiddev/Scientific-Calculator-App/blob/main/Scientific-Calculator Screenshot 2025-09-07 020144.png">)

Example CLI interface for the calculator:

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

## 🔍 Approach

- **Modular Design**: Each operation is implemented as a separate function for maintainability and extensibility.
- **Menu-driven UI**: User selects operations via a simple numbered menu.
- **Error Handling**: Checks for invalid inputs and division by zero.
- **Trigonometry**: Angles entered in degrees, converted internally to radians.

---

## 👤 Author

Abdul Salim Sulemana  
Developed by [Souzek-Androiddev](https://github.com/Souzek-Androiddev)
Feel free to customize or extend the calculator for more advanced operations! 😊
