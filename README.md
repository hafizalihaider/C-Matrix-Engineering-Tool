# Matrix Engineering Tool

A menu-driven matrix calculator written in C for performing fundamental matrix operations with user-defined matrix dimensions and values.

## Features

The Matrix Engineering Tool currently supports:

* Matrix Addition
* Matrix Subtraction
* Matrix Multiplication
* Matrix Transpose
* Input validation
* User-defined matrix dimensions
* Floating-point matrix elements
* Operation-specific dimension checking

## Supported Operations

### 1. Addition

Two matrices can be added only when they have the same order.

For:

`A = m × n`

`B = p × q`

Addition is possible when:

`m = p` and `n = q`

The program adds corresponding elements:

`C[i][j] = A[i][j] + B[i][j]`

### 2. Subtraction

Subtraction also requires both matrices to have the same order.

`C[i][j] = A[i][j] - B[i][j]`

### 3. Multiplication

Matrix multiplication is possible when:

`columns of A = rows of B`

For:

`A = m × n`

`B = p × q`

the required condition is:

`n = p`

The resulting matrix has dimensions:

`C = m × q`

Each element is calculated using the standard matrix multiplication rule:

`C[i][j] = Σ A[i][k] × B[k][j]`

### 4. Transpose

The transpose operation converts an `m × n` matrix into an `n × m` matrix.

Each element is moved according to:

`T[j][i] = A[i][j]`

A separate matrix is used for the transposed result so that non-square matrices can also be handled correctly.

## Input Validation

The program uses `strtof()` to convert user input into floating-point values and checks whether the complete input is valid.

Matrix dimensions are additionally validated to ensure that:

* The value is positive.
* The value is an integer.

The operation menu accepts only integer choices from `0` to `4`.

## Program Structure

The program is divided into separate functions so that input handling, matrix creation, validation, and mathematical operations are not mixed together.

| Function           | Purpose                                   |
| ------------------ | ----------------------------------------- |
| `get_number()`     | Reads and validates numerical input       |
| `main_menu()`      | Displays and validates the operation menu |
| `rows_columns()`   | Gets matrix dimensions                    |
| `matrix()`         | Reads and displays matrix elements        |
| `addition()`       | Performs matrix addition                  |
| `subtraction()`    | Performs matrix subtraction               |
| `multiplication()` | Performs matrix multiplication            |
| `transpose()`      | Calculates the transpose                  |
| `operation()`      | Dispatches the selected operation         |

## Concepts Used

This project applies several core C programming concepts:

* Functions
* Function parameters and return values
* Pointers
* Variable Length Arrays (VLAs)
* Two-dimensional arrays
* Nested loops
* Conditional statements
* Input validation
* String-to-floating-point conversion using `strtof()`
* Mathematical validation using `floor()`
* Dynamic matrix dimensions at runtime

## Example

For two matrices:

```text
A = | 1  2 |
    | 3  4 |

B = | 5  6 |
    | 7  8 |
```

Addition produces:

```text
A + B = |  6  8 |
        | 10 12 |
```

Multiplication produces:

```text
A × B = | 19 22 |
        | 43 50 |
```

The transpose of `A` produces:

```text
Aᵀ = | 1 3 |
     | 2 4 |
```

## Compilation

Compile the program using GCC:

```bash
gcc -Wall -Wextra -Wpedantic -std=c11 matrix.c -o matrix
```

Run the executable:

### Windows

```bash
matrix.exe
```

### Linux / macOS

```bash
./matrix
```

## Development Environment

* **Author:** Muhammad Ali Haider
* **Language:** C
* **IDE:** Visual Studio Code 1.119.0
* **Compiler:** GCC (Rev11, Built by MSYS2 project) 15.2.0
* **Date:** May 7, 2026

## Project Status

**Completed**

The current version implements the four planned matrix operations with input validation and dimension checking.

Future improvements may include:

* Matrix determinant
* Matrix inverse
* Scalar multiplication
* Identity matrix generation
* Matrix comparison
* Matrix power
* A more advanced interactive menu
* Improved error handling
* Separation of input, calculation, and display modules
