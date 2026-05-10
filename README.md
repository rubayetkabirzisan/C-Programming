# C Programming — Fundamentals to Data Structures

![Language](https://img.shields.io/badge/Language-C-blue?style=flat-square&logo=c)
![Programs](https://img.shields.io/badge/Programs-323+-brightgreen?style=flat-square)
![Topics](https://img.shields.io/badge/Topics-17-orange?style=flat-square)
![Status](https://img.shields.io/badge/Status-Active-success?style=flat-square)

A structured, hands-on collection of **323+ C programs** covering the full spectrum of C programming — from core syntax and operators all the way to dynamic memory management, file I/O, linked lists, and classic algorithms. Every program was written from scratch as part of deliberate, concept-by-concept study of the language.

---

## Why C?

C sits at the foundation of nearly everything in modern computing — operating systems, embedded systems, compilers, and performance-critical software are all built on it. Before writing full-stack applications or training ML models, I wanted to understand what actually happens at the memory level: how a pointer works, how the stack and heap differ, how strings are really just character arrays terminated by `\0`.

This repo is that understanding, documented program by program.

---

## 📊 At a Glance

| Topic | Programs | Highlights |
|---|---|---|
| Patterns | 84 | Pascal's Triangle, heart pattern, 78+ unique geometric patterns |
| Practice | 39 | Mixed problems, ASCII tables, tax calculators, puzzles |
| Array | 36 | Insertion/deletion, duplicates, frequency analysis, rotation |
| String | 27 | Encryption, manual copy, pointer-based traversal, comparison |
| Number Operations | 25 | Armstrong, palindrome, strong number, GCD/LCM, nCr |
| Function | 22 | Modular programs, return types, scope, multi-file patterns |
| Operators | 18 | Bitwise, unary, logical, ternary, typedef, enumeration |
| Structure | 14 | Nested structs, unions, array of structs, advanced usage |
| Series | 10 | Fibonacci, harmonic, AP/GP, custom mathematical sequences |
| Pointer | 10 | Arithmetic, pointer-to-array, function pointers, exercises |
| File | 10 | Create, read, write, append, copy, multi-file operations |
| Operations | 8 | Arithmetic, relational operations, sequence problems |
| Loop | 5 | `for`, `while`, `do-while` with practical examples |
| Algorithm | 5 | Bubble sort, linear/binary search, count sort, linked list |
| Switch | 4 | Menu-driven programs, multi-case branching |
| Recursion | 3 | Factorial, sum using recursion, recursive patterns |
| Dynamic Memory | 3 | `malloc`, `calloc`, dynamic array creation and access |

**Total: 323 programs across 17 topics**

---

## 🗂️ Folder Structure

```
C-Programming/
│
├── Operators/            # Language basics — unary, logical, bitwise, typedef, enum, goto
├── Operations/           # Arithmetic, relational, sequencing problems
├── Number Operations/    # Prime, palindrome, Armstrong, strong number, GCD, nCr, quadratic
├── Loop/                 # for / while / do-while with real examples
├── Switch/               # Switch-case and menu-driven programs
├── Series/               # Fibonacci, AP/GP, harmonic, and custom series
├── Patterns/             # 84 patterns — triangles, diamonds, Pascal's Triangle, DSA patterns
├── Function/             # User-defined functions, return values, scope, modular design
├── Recursion/            # Recursive factorial, sum, and pattern generation
├── Array/                # 1D/2D arrays, sorting, rotation, frequency, insertion/deletion
├── String/               # Manual operations, stdlib functions, pointer-based, encryption
├── Pointer/              # Declaration, arithmetic, pointer-to-array, exercises
├── Structure/            # Structs, nested structs, unions, array of structs
├── Dynamic Memory/       # Heap allocation with malloc/calloc, dynamic arrays
├── File/                 # File creation, reading, writing, appending, multi-file I/O
├── Algorithm/            # Bubble sort, count sort, linear/binary search, linked list
└── Practice/             # Mixed problems, ASCII, math, puzzles, quizzes
```

---

## 🔍 Notable Programs

### 🔗 Singly Linked List (`Algorithm/Linked LIST.c`)
A fully interactive linked list implementation supporting:
- Insert at head, tail, or any position
- Insert after a target value
- Traversal and printing
Built using dynamic memory allocation with `malloc` and struct-based nodes.

### 🔐 String Encryption (`String/String Encryption.c`)
A pointer-based Caesar cipher that traverses a character array and shifts each byte — demonstrating string manipulation without `string.h`.

### 🔺 Pascal's Triangle (`Patterns/Pascals Triangle.c`)
Computed using binomial coefficients via a recursive `binomialCoeff()` function — not hardcoded row generation.

### ⚙️ Count Sort (`Algorithm/Count Sort.c`)
A clean implementation of the counting sort algorithm using frequency arrays — O(n+k) time complexity.

### 🔢 Number Theory (`Number Operations/`)
Programs covering: Armstrong numbers, strong numbers, GCD & LCM, palindrome check, prime sieve, digit separation, reverse, nCr, quadratic equation solver, and Fibonacci using recursion.

### 🧠 Advanced String Work (`String/`)
27 programs ranging from basic character access to manual `strcmp` implementation, string encryption, pointer-based traversal, and advanced input handling with `fflush`.

---

## ⚙️ How to Compile & Run

**Linux / macOS:**
```bash
gcc filename.c -o output
./output
```

**Windows (MinGW):**
```bash
gcc filename.c -o output.exe
output.exe
```

**For programs using `<math.h>`:**
```bash
gcc filename.c -o output -lm
```

No external dependencies — every program uses only standard C headers (`stdio.h`, `stdlib.h`, `string.h`, `math.h`).

**Recommended editors:** VS Code with C/C++ extension, Code::Blocks, or Dev-C++.

---

## 🧱 Concepts Demonstrated

- **Memory management** — stack vs. heap, `malloc`/`calloc`/`realloc`/`free`
- **Pointer mechanics** — dereferencing, arithmetic, pointer-to-array, function pointers
- **String handling** — both manual (char-by-char) and via `string.h`
- **Data structures** — linked list, struct arrays, unions
- **Algorithms** — sorting (bubble, count), searching (linear, binary)
- **Recursion** — base cases, call stack behavior, recursive vs. iterative tradeoffs
- **File I/O** — `fopen`, `fclose`, `fprintf`, `fscanf`, `fgets`, append/read modes
- **Control flow** — all loop types, switch-case, `goto`, `break`/`continue`
- **Type system** — `typedef`, `enum`, implicit/explicit casting, unary operators

---
