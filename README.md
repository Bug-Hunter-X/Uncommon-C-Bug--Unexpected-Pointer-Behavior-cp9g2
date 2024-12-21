# Uncommon C Bug: Unexpected Pointer Behavior
This repository demonstrates a subtle C bug related to pointer manipulation and unexpected behavior. The primary focus is on illustrating how seemingly correct code can lead to unexpected outputs or crashes due to mishandling of pointers. 

## Bug Description
The `bug.c` file contains code that exhibits this behavior. The code intends to modify a variable's value using a pointer, but it neglects a key consideration, leading to a potential issue. 

## How to Reproduce
1. Clone this repository.
2. Compile `bug.c` using a C compiler (e.g., GCC):  `gcc bug.c -o bug`
3. Run the executable: `./bug`
4. Observe the output. It might not be what you expect. 

## Solution
The `bugSolution.c` file demonstrates a correct approach and explains the issue and solution. 

## Learning Points
This example highlights the importance of:
* Understanding pointer arithmetic in C.
* Being mindful of potential memory issues when working with pointers.
* Carefully handling pointer operations to avoid unexpected results or memory corruption.