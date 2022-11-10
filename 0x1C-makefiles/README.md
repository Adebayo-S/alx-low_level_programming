# 0x1C. C - Makefiles

<img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/273/giphy-2.gif" />

## Files

| Filename | Description |
| -------- | ----------- |
| `0-Makefile` | Builds an executable with `all` rule |
| `1-Makefile` | Builds an executable specifying a compiler and source files (`CC` and `SRC` variables) |
| `2-Makefile` | Builds an executable using `CC`, `SRC`, `OBJ` and `NAME` variables |
| `3-Makefile` | Builds an executable using `clean`, `oclean`, `fclean` and `re` rules, and `CC`, `SRC`, `OBJ`, `NAME` and `RM` variables |
| `4-Makefile` | Builds an executable using `clean`, `oclean`, `fclean` and `re` rules, and `CC`, `SRC`, `OBJ`, `NAME`, `RM` and `CFLAGS` variables  |
| `5-island_perimeter.py` | Function that returns the perimeter of an island described in `grid` list |
| `100-Makefile` | Complete Makefile with all of the variables and rules previously mentioned |

## Tasks

* **0. make -f 0-Makefile**
  * [0-Makefile](./0-Makefile): Makefile that creates an executable `holberton` based on
  [holberton.c](./holberton.c) and [main.c](./main.c). Includes:
    * Rule `all` that builds the executable.

* **1. make -f 1-Makefile**
  * [1-Makefile](./1-Makefile): Makefile that creates an executable `holberton` based on
  [holberton.c](./holberton.c) and [main.c](./main.c). Builds on [0-Makefile](./0-Makefile)
  with:
    * Variable `CC` that defines the compiler to be used.
    * Variable `SRC` that defines the `.c` files to compile.
    * The `all` rule only recompiles updated source files.

* **2. make -f 2-Makefile**
  * [2-Makefile](./2-Makefile): Makefile that creates an executable `holberton` based on
  [holberton.c](./holberton.c) and [main.c](./main.c). Builds on [1-Makefile](./1-Makefile)
  with:
    * Variable `OBJ` that defines the `.o` files to compile.
    * Variable `NAME` that defines the name of the executable.

* **3. make -f 3-Makefile**
  * [3-Makefile](./3-Makefile): Makefile that creates an executable `holberton` based on
  [holberton.c](./holberton.c) and [main.c](./main.c). Builds on [2-Makefile](./2-Makefile)
  with:
    * Rule `clean` that deletes all Emacs/Vim temporary files as well as the
    executable.
    * Rule `oclean` that deletes the object files.
    * Rule `fclean` that deltes all of the temporary files, executable, and
    object files.
    * Rule `re` that forces recompilation of all source files.
    * Variable `RM` that defines the command to delete files.

* **4. A complete Makefile**
  * [4-Makefile](./4-Makefile): Makefile that creates an executable `holberton` based on
  [holberton.c](./holberton.c) and [main.c](./main.c). Builds on [3-Makefile](./3-Makefile)
  with:
    * Variable `CFLAGS` that defines the compiler flags `-Wall -Werror -Wextra
    -pedantic`.

* **5. Island Perimeter**
  * [5-island_perimeter.py](./5-island_perimeter.py): Python function that returns the
  perimeter of an island defined in a grid.
  * Prototype: `def island_perimeter(grid):`
  * The parameter `grid` is a list of a list of integers.
    * Water is represented by `0`.
    * Land is represented by `1`.
    * Each element of the lists represents a cell square of side length 1.
    * Grid cells are connected horizontally/verticaly (not diagonally).
    * The grid is rectangular, with a width and height not exceeding 100.
    * The grid is completely surrounded by water, and there is either exactly
    one island or nothing.
    * The island does not contain lakes (water inside disconnected from
    surrounding land).

* **6. make -f 100-Makefile**
  * [100-Makefile](./100-Makefile): Makefile that creates an executable `holberton` based on
  [holberton.c](./holberton.c) and [main.c](./main.c). Builds on [4-Makefile](./4-Makefile)
  with:
    * Does not define the variable `RM`.
    * Never uses the string `$(CFLAGS)`.
    * Does not compile if the header `m.h` is missing.
    * Works even if there are existing files of the same name as any of the
    Makefile rules in the current directory.
