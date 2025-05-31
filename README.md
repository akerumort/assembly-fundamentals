# assembly-fundamentals

<p align="center"><img src="https://socialify.git.ci/akerumort/assembly-fundamentals/image?description=1&font=Jost&language=1&name=1&owner=1&theme=Light"></p>

This repository contains a collection of C++ programs that demonstrate the use of inline x86 assembly for fundamental array and string processing tasks. Each program solves a specific task, such as calculating averages, filtering elements, sorting, or string manipulation, using low-level assembly instructions for efficiency and educational purposes.

## ⚙ Features

- Array processing (e.g., summing, filtering, squaring elements)
- String manipulation (e.g., word extraction, character-based counting)
- Sorting small sets of numbers
- Use of inline x86 assembly for performance optimization
- Simple console-based input/output
- Multiple implementation variants for some tasks to showcase different assembly techniques

## 🌐 Program Descriptions

The repository includes the following programs:

1. **Arithmetic Average Calculator**: Computes the arithmetic mean of a predefined array of 10 integers.
2. **Even Numbers Extractor**: Identifies and extracts even numbers from a predefined array.
3. **Last Element Greater Than K Finder**: Finds the index of the last element in an array greater than a given value `k`.
4. **Maximum Element Finder**: Determines the maximum element in a user-input array.
5. **Second Word Extractor**: Extracts the second word from a predefined string.
6. **Positive Elements Sum Calculator**: Sums positive elements in an array until a zero is encountered.
7. **Words Starting with 't' Counter**: Counts words starting with 't' in a string, with three variant implementations:
   - Variant 1: Simple loop with character comparisons.
   - Variant 2: Uses `repne scasb` for efficient string scanning.
   - Variant 3: State-based approach with explicit space and word tracking.
8. **Negative Numbers Extractor**: Identifies and extracts negative numbers from a predefined array.
9. **Three Number Sorter**: Sorts three user-input integers in ascending order.
10. **Array Squares Calculator**: Computes the squares of elements in a predefined array.

Each program is documented in its own `README_*.md` file with detailed task descriptions and example outputs.

## 💻 Used Technologies

- **C++** (standard library for I/O)
- **x86 Assembly** (inline with C++)
- **C++ Compiler** (e.g., MSVC, GCC) with x86 assembly support

## 🐋 Installation

1. Install G++:
   ```bash
   sudo apt update && sudo apt install g++ -y
   g++ --version
   ```
2. Clone the repository:
   ```bash
   git clone https://github.com/akerumort/assembly-fundamentals.git
   cd assembly-fundamentals
   ```
3. Compile each program using a C++ compiler with x86 assembly support:
   ```bash
   g++ <program_file>.cpp -o <program_name>
   ```
   Example:
   ```bash
   g++ arithmetic_average.cpp -o arithmetic_average
   ```
4. Run the compiled program:
   ```bash
   ./<program_name>
   ```
   Example:
   ```bash
   ./arithmetic_average
   ```

## 📝 Documentation

- Individual program documentation is available in the repository as `README_*.md` files, each containing task descriptions, example outputs, and requirements.
- Source code is commented to explain key assembly instructions.

## 🛡️ License

This project is licensed under the MIT License. See the `LICENSE` file for more details.

## ✉️ Contact

For any questions or inquiries, please contact `akerumort404@gmail.com`.