## Tasks

* **0. Beauty is variable, ugliness is constant**
  * [0-sum_them_all.c](./0-sum_them_all.c): C function that returns the sum of
  all its paramters.
    * If the parameter `n == 0`, the function returns `0`.

* **1. To be is to be the value of a variable**
  * [1-print_numbers.c](./1-print_numbers.c): C function that prints numbers,
  followed by a new line.
    * The paramter `separator` is the string to be printed between numbers.
    * The paramter `n` is the number of integers passed to the function.
    * If `separator` is `NULL`, it is not printed.

* **2. One woman's constant is another woman's variable**
  * [2-print_strings.c](./2-print_strings.c): C function that prints strings,
  followed by a new line.
    * The parameter `separator` is the string to be printed between the strings.
    * The parameter `n` is the number of strings passed to the function.
    * If `separator` is `NULL`, it is not printed.
    * If one of the strings is `NULL`, the function prints `(nil)` instead.

* **3. To be is a to be the value of a variable**
  * [3-print_all.c](./3-print_all.c): C function that prints anything.
    * Usage: `print_all("ceis", 'H', 0, "lberton");`
    * The paramter `format` is a list of types of arguments passed to the function
    (`c`:`char`, `i`:`int`, `f`:`float`, `s`:`char *` (if the string is
    `NULL`, `(nil)` is printed instead))
    * Any other character is ignored.
    * A new line is printed at the end of the function.

* **4. Real programmers can write assembly code in any language**
  * [100-hello_holberton.asm](./100-hello_holberton.asm): 64-bit assembly program that
  prints `Hello, Holberton`, followed by a new line using only the system call
  `write` with `int`.
