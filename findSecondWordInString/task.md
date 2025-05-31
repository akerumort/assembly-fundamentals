# Second Word Extractor

This C++ program extracts the second word from a predefined string using inline x86 assembly code.

## Task Description

The program:

- Defines a string: `"this is a test string that contains 4 words starting with t"`.
- Uses x86 assembly to:
  - Iterate through the string to locate the second word (delimited by spaces).
  - Copy the characters of the second word (`is`) into a separate array.
- Outputs the extracted second word.

**Example Output:**

```
is
```