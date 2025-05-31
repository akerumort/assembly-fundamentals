# Words Starting with 't' Counter

This C++ program counts the number of words starting with the letter 't' in a predefined string using inline x86 assembly code. The program is implemented in three variants, each achieving the same result with different assembly approaches.

## Task Description

The program:

- Defines a string: `"this is a test string that contains 4 words starting with t"`.
- Uses x86 assembly to:
  - Iterate through the string, identifying words (delimited by spaces).
  - Count words that begin with the letter 't'.
- Outputs the total count of words starting with 't'.

**Example Output:**

```
Words starting with 't': 4
```

## Variants

The program has three implementation variants, differing in their assembly logic:

1. **First Variant**: Uses a simple loop with explicit character comparisons to detect spaces and 't', incrementing a counter for matching words.
2. **Second Variant**: Utilizes the `repne scasb` instruction for efficient string scanning to find spaces, then checks for 't' at word starts, optimizing for known string length.
3. **Third Variant**: Employs a state-based approach, explicitly tracking spaces and word starts with conditional jumps, offering a more structured flow.