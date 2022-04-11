# 0x0D. C - Preprocessor

## About

Project involves understanding what's going on in the C preprocessor, and working with macros, header files and including guards for header files.

## Technologies

* C files are written according to the C90 standard
* Tested on Ubuntu 20.04 LTS

## Files

All of the following files are programs written in C:

| Filename | Description |
| -------- | ----------- |
| [0-object_like_macro.h](./0-object_like_macro.h) | Header file that defines a macro named `SIZE` |
| [1-pi.h](./1-pi.h) | Header file that defines a macro named `PI` |
| [2-main.c](./2-main.c) | Prints the name of the file it was compiled from |
| [3-function_like_macro.h](./3-function_like_macro.h) | Function-like macro `ABS(x)` that computes the absolute value of a number `x` |
| [4-sum.h](./4-sum.h) | Function-like macro `SUM(x,y)` that computes the sum of the numbers `x` and `y` |

## Tasks:

* **0. Object-like Macro**
  * [0-object_like_macro.h](./0-object_like_macro.h): Header file that defines a
  macro named `SIZE` as an abbreviation for the token `1024`.

* **1. Pi**
  * [1-pi.h](./1-pi.h): Header file that defines a macro named `PI` as an abbreviation
  for the token `3.14159265359`.

* **2. File name**
  * [2-main.c](./2-main.c): C program that prints the name of the file it was
  compiled from followed by a new line.

* **3. Function-like macro**
  * [3-function_like_macro.h](./3-function_like_macro.h): Header file that defines a
  function-like macro `ABS(x)` that computes the absolute value of a number `x`.

* **4. SUM**
  * [4-sum.h](./4-sum.h): Header file that defines a function-like macro `SUM(x, y)`
  that computes the sum of the numbers `x` and `y`.
