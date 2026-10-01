# LeetCode Submissions

A collection of optimized C++ solutions to LeetCode problems, documenting my data structures and algorithms (DSA) learning journey.

## 📚 About This Repository

This repository contains my solutions to various LeetCode problems as I progress through my DSA learning journey. Each problem solution includes:
- Well-commented C++ implementation
- Clear explanation of the approach
- Time and space complexity analysis
- Multiple examples from the problem statement

## 🛠️ Tech Stack

- **Language:** C++
- **Standard Library:** STL (Stack, Unordered Map, Vector, etc.)
- **Platform:** [LeetCode](https://leetcode.com)

## 📂 Repository Structure

```
leecode-submissions/
├── 0020-valid-parentheses/
│   ├── 0020-valid-parentheses.cpp    # Solution implementation
│   └── README.md                      # Problem statement & approach
├── [Problem-ID]-[Problem-Name]/
│   ├── [Problem-ID]-[Problem-Name].cpp
│   └── README.md
└── ...
```

Each problem folder is organized with:
- **Naming Convention:** `[LeetCode-ID]-[kebab-case-problem-name]`
- **Implementation:** `.cpp` file with optimized solution
- **Documentation:** `README.md` with problem details and approach

## 🚀 Getting Started

### Prerequisites
- C++11 or later compiler (g++, clang, or MSVC)

### Running a Solution
Each problem folder contains a self-contained solution. You can compile and test locally:

```bash
cd 0020-valid-parentheses
g++ -std=c++11 0020-valid-parentheses.cpp -o solution
./solution
```

Or submit the `.cpp` file directly to LeetCode's judge.

## 📊 Problem Categories

Solutions are organized by LeetCode problem ID for easy reference:

| Problem ID | Problem Name | Difficulty | Approach |
|-----------|-------------|-----------|----------|
| 0020 | Valid Parentheses | Easy | Stack-based matching |
| ... | ... | ... | ... |

*More problems coming as I continue my DSA journey!*

## 💡 Key Concepts Covered

- **Data Structures:** Stacks, Queues, Hash Maps, Arrays, Linked Lists, Trees, Graphs
- **Algorithms:** Searching, Sorting, Dynamic Programming, BFS/DFS, Greedy, Two Pointers
- **Techniques:** Sliding Window, Stack-based solutions, Recursion, Memoization

## 🎯 Learning Goals

- Master fundamental DSA concepts
- Develop problem-solving skills
- Learn multiple approaches to solve the same problem
- Write clean, optimized, and well-documented code

## 📝 Example: Valid Parentheses (Problem 20)

**Approach:** Stack-based matching
- Use a stack to track opening brackets
- Map closing brackets to their corresponding opening bracket
- For each character, check if it's a closing bracket that matches the stack's top
- Valid only if all brackets are matched and stack is empty

**Complexity:**
- Time: O(n) - single pass through string
- Space: O(n) - stack can contain up to n/2 opening brackets

## 🔗 Useful Resources

- [LeetCode Platform](https://leetcode.com)
- [C++ STL Documentation](https://en.cppreference.com/)
- [Big-O Complexity Cheat Sheet](https://www.bigocheatsheet.com/)

## 📈 Progress Tracker

- **Total Problems Solved:** 1+
- **Easy:** 1
- **Medium:** 0
- **Hard:** 0

## 💬 Feedback & Contributions

This is a personal learning repository. If you have suggestions for improvements or alternative approaches, feel free to open an issue or discussion!

## 📄 License

Open for reference and learning purposes.

---

**Last Updated:** October 2026

*Happy Coding! 🚀*
