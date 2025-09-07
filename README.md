# Scientific Calculator in C++

## Table of Contents
- [Overview](#overview)
- [Tech Stack](#tech-stack)
- [Getting Started](#getting-started)
- [Setup & Run Instructions](#setup--run-instructions)
- [Screenshots](#screenshots)
- [Approach](#approach)
- [License](#license)
- [Author](#author)

## Overview
A menu-driven scientific calculator implemented in C++. It supports arithmetic, powers, roots, logarithms, and trigonometric functions, all via a command-line interface. The code is modular, user-friendly, and easy to extend.

## Tech Stack
- **Language:** C++
- **Platform:** Command Line
- **Tools:** g++ or any C++ compiler

> **Note:** Although you mentioned Java, this project is implemented in C++. If you need a Java version, let me know!

## Getting Started

### Clone the Repository
```sh
git clone https://github.com/souzekandroiddev/ScientificCalculator.git
```

### Setup & Run Instructions

1. **Navigate to the project directory:**
   ```sh
   cd ScientificCalculator
   ```

2. **Compile the application:**
   ```sh
   g++ App.cpp -o calc -lm
   ```
   *(If your main file is named differently, adjust the command accordingly)*

3. **Run the application:**
   ```sh
   ./calc
   ```

## Screenshots

> Add screenshots here to showcase the calculator in action.
>
> Example:
>
> ![Calculator Main Menu](screenshots/main_menu.png)
> ![Sample Calculation](screenshots/sample_calculation.png)

## Approach

- **Menu-driven Design:** Users interact via a numbered menu for different operations.
- **Input Validation:** Handles invalid inputs (e.g., division by zero, negative roots).
- **Functions:** Each mathematical operation is handled in its own case for clarity and modularity.
- **Trigonometric Functions:** Angles are input in degrees for user convenience.

## License

This project is open-source and available under the [MIT License](LICENSE).

## Author
Abdul Salim Sulemana
Developed by [Souzek-Androiddev](https://github.com/Souzek-Androiddev)
