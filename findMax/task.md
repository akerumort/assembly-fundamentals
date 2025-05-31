# Maximum Element Finder

This C++ program finds the maximum element in an array of user-input integers using inline x86 assembly code.

## Task Description

The program:

- Prompts the user to input 5 integers into an array.
- Uses x86 assembly to:
  - Iterate through the array.
  - Identify and store the maximum element.
- Outputs the maximum element found in the array.

**Example Output:**

```
Enter array of 5 elements:
arr[0] = 3
arr[1] = 8
arr[2] = 1
arr[3] = 9
arr[4] = 4
Max element: 9
```

## Purpose

The program demonstrates the use of inline assembly in C++ to efficiently find the maximum value in an array of user-provided integers.

## Requirements

- C++ compiler with x86 assembly support (e.g., MSVC or GCC).
- Windows or compatible environment for the assembly instructions used.