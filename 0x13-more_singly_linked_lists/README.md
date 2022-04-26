# 0x13 C - More singly linked lists

In this project, I learned about implementing linked list data structures in C.

## Technologies

* C files are compiled using `gcc 9.3.0`
* C files are written according to the C89 standard
* Tested on Ubuntu 20.04 LTS

## Files

All of the following files are programs written in C:

| Filename | Description |
| -------- | ----------- |
| [0-print_listint.c](./0-print_listint.c) | Prints all the elements of a `listint_t` list |
| [1-listint_len.c](./1-listint_len.c) | Returns the number of elements in a linked `listint_t` list |
| [2-add_nodeint.c](./2-add_nodeint.c)` | Adds a new node at the beginning of a `listint_t` list |
| [3-add_nodeint_end.c](./3-add_nodeint_end.c) | Adds a new node at the end of a `listint_t` list |
| [4-free_listint.c](./4-free_listint.c) | Frees a `listint_t` list |
| [5-free_listint2.c](./5-free_listint2.c) | Frees a `listint_t` list |
| [6-pop_listint.c](./6-pop_listint.c) | Deletes the head node of a `listint_t` linked list, and returns the head node's data (n) |
| [7-get_nodeint.c](./7-get_nodeint.c) | Returns the nth node of a `listint_t` linked list |
| [8-sum_listint.c](./8-sum_listint.c) | Returns the sum of all the data (n) of a `listint_t` linked list |
| [9-insert_nodeint.c](./9-insert_nodeint.c) | Inserts a new node at a given position |
| [10-delete_nodeint.c](./10-delete_nodeint.c) | Deletes the node at index `index` of a `listint_t` linked list |
| [100-reverse_listint.c](./100-reverse_listint.c) | Reverses a `listint_t` linked list |
| [101-print_listint_safe.c](./101-print_listint_safe.c) | Prints a `listint_t` linked list |
| [102-free_listint_safe.c](./102-free_listint_safe.c) | Frees a `listint_t` list |
| [103-find_loop.c](./103-find_loop.c) | Finds the loop in a linked list |

## Tasks

* **0. Print list**
  * [0-print_listint.c](./0-print_listint.c): C function that prints all the elements
  of a `listint_t` linked list.
    * Returns the number of nodes in the `listint_t` list.

* **1. List length**
  * [1-listint_len.c](./1-listint_len.c): C function that returns the number
  of elements in a `listint_t` linked list.

* **2. Add node**
  * [2-add_nodeint.c](./2-add_nodeint.c): C function that adds a new node at
  the beginning of a `listint_t` linked list.
    * If the function fails - returns `NULL`.
    * Otherwise - returns the address of the new element.

* **3. Add node at the end**
  * [3-add_nodeint_end.c](./3-add_nodeint_end.c): C function that adds a new node
  at the end of a `listint_t` linked list.
    * If the function fails - returns `NULL`.
    * Otherwise - returns the address of the new element.

* **4. Free list**
  * [4-free_listint.c](./4-free_listint.c): C function that frees a `listint_t`
  linked list.

* **5. Free**
  * [5-free_listint2.c](./5-free_listint2.c): C function that frees a
  `listint_t` linked list.
    * Sets the `head` to `NULL`.

* **6. Pop**
  * [6-pop_listint.c](./6-pop_listint.c): C function that deletes the head node of
  a `listint_t` linked list.
    * If the linked list is empty - returns `0`.
    * Otherwise - returns the head node's data (`n`).

* **7. Get node at index**
  * [7-get_nodeint.c](./7-get_nodeint.c): C function that locates a given node
  of a `listint_t` linked list.
    * If the node does not exist - returns `NULL`.
    * Otherwise - returns the located node.

* **8. Sum list**
  * [8-sum_listint.c](./8-sum_listint.c): C function that returns the sum of all
  the data (`n`) of a `listint_t` linked list.
    * If the linked list is empty - returns `0`.
    * Otherwise - returns the sum of all the data (`n`).

* **9. Insert**
  * [9-insert_nodeint.c](./9-insert_nodeint.c): C function that inserts a new node to
  a `listint_t` linked list at a given position.
    * If it is not possible to add the new node at index `idx`, or the function
    fails - returns `NULL`.
    * Otherwise - returns the address of the new node.

* **10. Delete at index**
  * [10-delete_nodeint.c](./10-delete_nodeint.c): C function that deletes the node at a
  given index of a `listint_t` linked list.
    * If the function succeeds - returns `1`.
    * If the function fails - returns `-1`.

* **11. Reverse list**
  * [100-reverse_listint.c](./100-reverse_listint.c): C function that reverses a `listint_t`
  linked list using a maximum of one loop and two variables.
    * Returns a pointer to the first node of the reversed list.

* **12. Print (safe version)**
  * [101-print_listint_safe.c](./101-print_listint_safe.c): C function that prints
  a `listint_t` linked list safely (ie. can free lists containing loops).
    * Returns the number of nodes in the `listint_t` list.

* **13. Free (safe version)**
  * [102-free_listint_safe.c](./102-free_listint_safe.c): C function that frees a
  `listint_t` linked list safely (ie. can free lists containing loops).
    * Returns the size of the list that was freed.
    * Sets the `head` to `NULL`.

* **14. Find the loop**
  * [103-find_loop.c](./103-find_loop.c): C function that finds the loop contained in a
  `listint_t` linked list using a maximum of two variables.
    * If no loop is found - returns `NULL`.
    * Otherwise - returns the address of the node where the loop starts.
