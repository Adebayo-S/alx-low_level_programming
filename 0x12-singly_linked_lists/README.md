# Singly linked lists

In this project, I learned about implementing linked list data structures in C.

## Technologies

* C files are compiled using `gcc 9.3.0`
* C files are written according to the C89 standard
* Tested on Ubuntu 20.04 LTS

## Files

All of the following files are programs written in C:

| Filename | Description |
| -------- | ----------- |
| [0-print_list.c](./0-print_list.c) | Prints all the elements of a `list_t` list |
| [1-list_len.c](./1-list_len.c) | Returns the number of elements in a linked `list_t` list |
| [2-add_node.c](./2-add_node.c) | Adds a new node at the beginning of a `list_t` list |
| [3-add_node_end.c](./3-add_node_end.c) | Adds a new node at the end of a `list_t` list |
| [4-free_list.c](./4-free_list.c) | Frees a `list_t` list |
| [100-first.c](./100-first.c) | Prints a message before main function is executed |
| [101-hello_holberton.asm](./101-hello_holberton.asm)` | Assembly code that prints `Hello, Holberton` only using `printf` function |

## Tasks:

* **0. Print list**
  * [0-print_list.c](./0-print_list.c): C function that prints all the
  elements of a `list_t` list.
    * If `str` is `NULL`, the function prints `[0] (nil)`.

* **1. List length**
  * [1-list_len.c](./1-list_len.c): C function that returns the number of elements
  in a linked `list_t` list.

* **2. Add node**
  * [2-add_node.c](./2-add_node.c): C function that adds a new node at the
  beginning a of a `list_t` list.
    * If the function fails - returns `NULL`.
    * Otherwise - returns the address of the new element.

* **3. Add node at the end**
  * [3-add_node_end.c](./3-add_node_end.c): C function that adds a new node at
  the end of a linked `list_t` list.
    * If the function fails - returns `NULL`.
    * Otherwise - returns the address of the new element.

* **4. Free list**
  * [4-free_list.c](./4-free_list.c): C function that frees a `list_t` list.

* **5. The Hare and the Tortoise**
  * [100-first.c](./100-first.c): C function that prints `You're beat! and
  yet, you must allow,\nI bore my house upon my back!\n` before the `main`
  function is executed.

* **6. Real programmers can write assembly code in any language**
  * [101-hello_holberton.asm](./101-hello_holberton.asm): 64-but assembly program
  that prints `Hello, Holberton` followe
