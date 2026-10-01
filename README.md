# Dynamic Array Using realloc() in C

## Project Description

A simple C program that demonstrates dynamic memory allocation using `malloc()` and `realloc()`. The program first creates an array with a user-defined size and then changes the size of the array using `realloc()`.

## Features

- Create an array dynamically
- Allocate memory using `malloc()`
- Change array size using `realloc()`
- Add additional elements when the array size increases
- Display the updated array
- Release memory using `free()`
- Check memory allocation errors

## Technologies Used

- C
- Dynamic Memory Allocation
- `malloc()`
- `realloc()`
- `free()`
- Pointers
- Arrays

## How to Run

1. Create a file named `dynamic_array_realloc.c`.
2. Compile the program using a C compiler.
3. Run the compiled program.

Example using GCC:

```bash
gcc dynamic_array_realloc.c -o dynamic_array_realloc
./dynamic_array_realloc

===== Dynamic Array Using realloc() =====
Enter initial number of elements: 3
Enter 3 elements:
Element 1: 10
Element 2: 20
Element 3: 30

Enter new size of the array: 5
Enter 2 additional elements:
Element 4: 40
Element 5: 50

Updated array:
10 20 30 40 50
Memory released successfully.

Author

M.Likitha
