<h1 align="center"> 🔄 Push_swap</h1>

<p align="center">
  <img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="C"/>
  <img src="https://img.shields.io/badge/42-000000?style=for-the-badge&logo=42&logoColor=white" alt="42"/>
</p>

An efficient sorting algorithm implementation using two stacks with a limited set of operations, developed as part of the 42 curriculum.

## 📋 Overview

Push_swap is a sorting algorithm project that focuses on sorting data using two stacks (stack A and stack B) with a specific set of operations. The goal is to sort the numbers in stack A in ascending order using the minimum number of operations possible.

## ✨ Features

### Stack Operations
* `sa`: Swap first two elements of stack A
* `sb`: Swap first two elements of stack B
* `ss`: `sa` and `sb` at the same time
* `pa`: Push top element from stack B to stack A
* `pb`: Push top element from stack A to stack B
* `ra`: Rotate stack A (first element becomes last)
* `rb`: Rotate stack B (first element becomes last)
* `rr`: `ra` and `rb` at the same time
* `rra`: Reverse rotate stack A (last element becomes first)
* `rrb`: Reverse rotate stack B (last element becomes first)
* `rrr`: `rra` and `rrb` at the same time

### Algorithm Features
* Efficient sorting for different input sizes
* Optimized number of operations
* Stack manipulation strategy
* Error handling
* Input validation

## 🚀 Getting Started

### Prerequisites
* GCC compiler
* Make
* Unix-like operating system

### Installation

```bash
# Clone the repository
git clone https://github.com/lciullo/push_swap
cd push_swap

# Compile the project
make
```

### Usage

```bash
# Basic usage
./push_swap 2 1 3 6 5 8

# With checker (if bonus part implemented)
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG

# Random number generator usage
ARG=$(seq 1 100 | sort -R | tr '\n' ' '); ./push_swap $ARG
```

## 🎯 Project Objectives
* Implement an efficient sorting algorithm
* Minimize the number of operations
* Handle edge cases and errors
* Optimize for different input sizes
* Learn stack data structure manipulation
* Develop algorithmic thinking

## 🧮 Algorithm Complexity

### Performance Targets
* 3 numbers: ≤ 3 operations
* 5 numbers: ≤ 12 operations
* 100 numbers: ≤ 700 operations
* 500 numbers: ≤ 5500 operations

### Sorting Strategy
1. Input validation and parsing
2. Stack initialization
3. Small sort (≤5 numbers) optimization
4. Large sort algorithm implementation
5. Operation optimization

## 🛠️ Technical Implementation

### Core Components
* Stack implementation
* Operation functions
* Sorting algorithms
* Input validation
* Memory management

### Sorting Algorithms
* Small sort (2-5 numbers)
* Large sort
  * Chunk sorting
  * Position calculation
  * Cost optimization
  * Path finding

## 🧠 Learning Outcomes
This project provides experience in:
* Algorithm development
* Data structure manipulation
* Optimization techniques
* Memory management
* Error handling
* Performance analysis
* Problem-solving strategies

## 🔍 Error Handling
* Duplicate numbers
* Non-numeric input
* Integer overflow
* Memory allocation failures
* Invalid operations

## ✅ Testing

### Test Cases
* Already sorted numbers
* Reverse sorted numbers
* Random number sequences
* Edge cases (INT_MAX, INT_MIN)
* Small sets (2-5 numbers)
* Large sets (100, 500 numbers)

### Performance Testing
* Operation count verification
* Memory usage monitoring
* Edge case handling
* Algorithm efficiency
* 
## 🤝 Contributor
- **Lisa Ciullo** - [@lciullo](https://github.com/lciullo)

## 📝 License
This project is part of the 42 school curriculum.

