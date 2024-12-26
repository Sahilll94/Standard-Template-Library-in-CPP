# Standard Template Library in C++

Welcome to the **Standard Template Library in C++** repository! This repository provides an in-depth exploration of the containers in the C++ Standard Template Library (STL), demonstrating how each container works, its operations, and performance characteristics. Whether you are a beginner looking to understand the basics of STL or an advanced user seeking optimization tips, this repository has got you covered.

## Table of Contents

- [Overview](#overview)
- [Containers Covered](#containers-covered)
- [Operations](#operations)
- [Examples](#examples)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)
- [STL Sets and Maps Guide](#stl-sets-and-maps-guide)

## Overview

The **Standard Template Library (STL)** in C++ is a collection of template classes and functions that implement common data structures and algorithms. STL includes several powerful containers, such as vectors, maps, sets, lists, and queues, each designed to handle different types of data manipulation efficiently.

This repository serves as a guide to understanding how these containers function, how to use them, and the performance trade-offs of each. Through well-documented examples and explanations, you can explore the core features of each container.

## Containers Covered

The following STL containers are explored in this repository:

1. **Vector**
   - Dynamic array, which allows random access and supports efficient resizing.
2. **List**
   - Doubly linked list, optimized for insertions and deletions at both ends.
3. **Deque**
   - Double-ended queue that allows fast insertions and deletions at both ends.
4. **Set**
   - Collection of unique elements with automatic sorting.
5. **Map**
   - Key-value pairs where each key is unique, and values are associated with keys.
6. **Queue**
   - FIFO (First In First Out) data structure.
7. **Stack**
   - LIFO (Last In First Out) data structure.
8. **Priority Queue**
   - Specialized queue that allows access to the highest priority element.

Each container includes a breakdown of:
- Basic operations (insert, delete, access)
- Time complexities of each operation
- Real-world use cases and performance considerations

## Operations

Here are some common operations demonstrated for each container:

- **Insertion**
- **Deletion**
- **Traversal**
- **Search**
- **Modification**
- **Sorting (where applicable)**

These operations are explained with code examples and their time complexities are discussed.

## Examples

Each container comes with a set of examples that show how to use it in real-world scenarios. Here’s a brief example for a **Vector**:

### Vector Example:

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;

    // Inserting elements
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // Accessing elements
    std::cout << "First element: " << vec[0] << std::endl;

    // Traversing the vector
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << "Element " << i << ": " << vec[i] << std::endl;
    }

    // Deleting an element
    vec.pop_back();
    std::cout << "After pop_back, size: " << vec.size() << std::endl;

    return 0;
}
```

# STL Sets and Maps Guide

## Sets in C++

```
┌─────────────────────────────────────────────┐
│                    SETS                     │
├───────────────┬────────────┬───────────────┤
│     SET       │  MULTISET  │ UNORDERED_SET │
├───────────────┼────────────┼───────────────┤
│ [2,3,4,5]     │[2,2,3,3,4] │ [5,2,4,3]     │
│               │            │               │
│ ✓ Unique     │ × Not      │ ✓ Unique     │
│ ✓ Sorted     │   Unique   │ × Not        │
│              │ ✓ Sorted   │   Sorted     │
└───────────────┴────────────┴───────────────┘
```

## Maps in C++

```
┌─────────────────────────────────────────────┐
│                    MAPS                     │
├───────────────┬────────────┬───────────────┤
│     MAP       │  MULTIMAP  │ UNORDERED_MAP │
├───────────────┼────────────┼───────────────┤
│{1:"A",2:"B"}  │{1:"A",     │ {2:"B",       │
│               │ 1:"B",     │  1:"A",       │
│               │ 2:"C"}     │  4:"D"}       │
│ ✓ Unique Keys │ × Multiple │ ✓ Unique Keys │
│ ✓ Sorted Keys │   Keys     │ × Not        │
│               │ ✓ Sorted   │   Sorted     │
└───────────────┴────────────┴───────────────┘
```

### Time Complexities

#### Sets
- Set: O(log n) for insertion/deletion
- Multiset: O(log n) for insertion/deletion
- Unordered_set: O(1) average, O(n) worst case

#### Maps
- Map: O(log n) for insertion/deletion
- Multimap: O(log n) for insertion/deletion
- Unordered_map: O(1) average, O(n) worst case


## Usage

To explore the code:

1. Clone this repository:
    ```bash
    git clone https://github.com/yourusername/Standard-Template-Library-in-CPP.git
    ```

2. Navigate into the project directory:
    ```bash
    cd Standard-Template-Library-in-CPP
    ```

3. Compile and run the example files using your favorite C++ compiler:
    ```bash
    g++ -o vector_example vector_example.cpp
    ./vector_example
    ```

Feel free to modify the examples to explore different operations or containers.

## Contributing

Contributions are welcome! If you find any issues or have improvements or suggestions for the repository, please feel free to fork the repository and submit a pull request.

### How to Contribute:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make your changes.
4. Commit your changes (`git commit -am 'Add new feature'`).
5. Push to your branch (`git push origin feature-branch`).
6. Open a pull request.

## License

This repository is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
