# Vector Implementation in Data Structures

---

## Overview

In data structures, a vector, also known as a dynamic array, is a resizable array that allows elements to be efficiently added or removed. It combines the benefits of both arrays and linked lists, providing fast random access to elements and dynamic resizing when needed.

## Key Features

- **Dynamic Size**: Vectors can grow or shrink in size dynamically based on the number of elements they hold.

- **Random Access**: Elements in a vector can be accessed directly by their index, providing constant-time access.

- **Efficient Insertion and Deletion**: While inserts and deletes within a vector are generally slower compared to at the end, they are faster than linked lists for most practical purposes.

- **Contiguous Memory**: Elements in a vector are stored in contiguous memory locations, allowing efficient cache utilization.

- **Efficient Traversal**: Iterating through a vector is efficient due to its contiguous memory layout.

## Implementation Details

This task involves implementing the function signatures defined in `da.h` in `da.cpp`. The provided files include:

- `main.cpp`: This is used for testing the application.
- `da.h`: Contains the function signatures implemented.
- `da.cpp`: This is where the function definitions implemented.
- `catch.hpp`, `test.cpp`: These are used for testing and **should not be modified**. 

## Instructions for making your own Vector Implementation

1. Read the comments in the code files, especially in `da.h` and `da.cpp`, to understand what each function is expected to do.

2. Implement the functions in `da.cpp` based on the provided function signatures.

3. Test your implementation by running the tests using the following commands in the command line or Terminal:

   ```bash
   make clean
   make test
