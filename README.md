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

<!---LeetCode Topics Start-->
# LeetCode Topics
## String
|  |
| ------- |
| [0022-generate-parentheses](https://github.com/obj8899/leecode-submissions/tree/master/0022-generate-parentheses) |
| [0028-find-the-index-of-the-first-occurrence-in-a-string](https://github.com/obj8899/leecode-submissions/tree/master/0028-find-the-index-of-the-first-occurrence-in-a-string) |
| [0032-longest-valid-parentheses](https://github.com/obj8899/leecode-submissions/tree/master/0032-longest-valid-parentheses) |
| [0058-length-of-last-word](https://github.com/obj8899/leecode-submissions/tree/master/0058-length-of-last-word) |
| [0301-remove-invalid-parentheses](https://github.com/obj8899/leecode-submissions/tree/master/0301-remove-invalid-parentheses) |
| [0678-valid-parenthesis-string](https://github.com/obj8899/leecode-submissions/tree/master/0678-valid-parenthesis-string) |
| [0856-score-of-parentheses](https://github.com/obj8899/leecode-submissions/tree/master/0856-score-of-parentheses) |
| [0921-minimum-add-to-make-parentheses-valid](https://github.com/obj8899/leecode-submissions/tree/master/0921-minimum-add-to-make-parentheses-valid) |
| [1021-remove-outermost-parentheses](https://github.com/obj8899/leecode-submissions/tree/master/1021-remove-outermost-parentheses) |
| [1541-minimum-insertions-to-balance-a-parentheses-string](https://github.com/obj8899/leecode-submissions/tree/master/1541-minimum-insertions-to-balance-a-parentheses-string) |
## Dynamic Programming
|  |
| ------- |
| [0022-generate-parentheses](https://github.com/obj8899/leecode-submissions/tree/master/0022-generate-parentheses) |
| [0032-longest-valid-parentheses](https://github.com/obj8899/leecode-submissions/tree/master/0032-longest-valid-parentheses) |
| [0678-valid-parenthesis-string](https://github.com/obj8899/leecode-submissions/tree/master/0678-valid-parenthesis-string) |
| [1569-number-of-ways-to-reorder-array-to-get-same-bst](https://github.com/obj8899/leecode-submissions/tree/master/1569-number-of-ways-to-reorder-array-to-get-same-bst) |
## Backtracking
|  |
| ------- |
| [0022-generate-parentheses](https://github.com/obj8899/leecode-submissions/tree/master/0022-generate-parentheses) |
| [0301-remove-invalid-parentheses](https://github.com/obj8899/leecode-submissions/tree/master/0301-remove-invalid-parentheses) |
## Bracket Sequences
|  |
| ------- |
| [0022-generate-parentheses](https://github.com/obj8899/leecode-submissions/tree/master/0022-generate-parentheses) |
| [0032-longest-valid-parentheses](https://github.com/obj8899/leecode-submissions/tree/master/0032-longest-valid-parentheses) |
| [0678-valid-parenthesis-string](https://github.com/obj8899/leecode-submissions/tree/master/0678-valid-parenthesis-string) |
| [0856-score-of-parentheses](https://github.com/obj8899/leecode-submissions/tree/master/0856-score-of-parentheses) |
| [0921-minimum-add-to-make-parentheses-valid](https://github.com/obj8899/leecode-submissions/tree/master/0921-minimum-add-to-make-parentheses-valid) |
| [1021-remove-outermost-parentheses](https://github.com/obj8899/leecode-submissions/tree/master/1021-remove-outermost-parentheses) |
| [1541-minimum-insertions-to-balance-a-parentheses-string](https://github.com/obj8899/leecode-submissions/tree/master/1541-minimum-insertions-to-balance-a-parentheses-string) |
## Array
|  |
| ------- |
| [0026-remove-duplicates-from-sorted-array](https://github.com/obj8899/leecode-submissions/tree/master/0026-remove-duplicates-from-sorted-array) |
| [0034-find-first-and-last-position-of-element-in-sorted-array](https://github.com/obj8899/leecode-submissions/tree/master/0034-find-first-and-last-position-of-element-in-sorted-array) |
| [1569-number-of-ways-to-reorder-array-to-get-same-bst](https://github.com/obj8899/leecode-submissions/tree/master/1569-number-of-ways-to-reorder-array-to-get-same-bst) |
| [2089-find-target-indices-after-sorting-array](https://github.com/obj8899/leecode-submissions/tree/master/2089-find-target-indices-after-sorting-array) |
| [2333-minimum-sum-of-squared-difference](https://github.com/obj8899/leecode-submissions/tree/master/2333-minimum-sum-of-squared-difference) |
| [2778-sum-of-squares-of-special-elements](https://github.com/obj8899/leecode-submissions/tree/master/2778-sum-of-squares-of-special-elements) |
| [2897-apply-operations-on-array-to-maximize-sum-of-squares](https://github.com/obj8899/leecode-submissions/tree/master/2897-apply-operations-on-array-to-maximize-sum-of-squares) |
| [2913-subarrays-distinct-element-sum-of-squares-i](https://github.com/obj8899/leecode-submissions/tree/master/2913-subarrays-distinct-element-sum-of-squares-i) |
| [2916-subarrays-distinct-element-sum-of-squares-ii](https://github.com/obj8899/leecode-submissions/tree/master/2916-subarrays-distinct-element-sum-of-squares-ii) |
| [3551-minimum-swaps-to-sort-by-digit-sum](https://github.com/obj8899/leecode-submissions/tree/master/3551-minimum-swaps-to-sort-by-digit-sum) |
| [3727-maximum-alternating-sum-of-squares](https://github.com/obj8899/leecode-submissions/tree/master/3727-maximum-alternating-sum-of-squares) |
## Binary Search
|  |
| ------- |
| [0034-find-first-and-last-position-of-element-in-sorted-array](https://github.com/obj8899/leecode-submissions/tree/master/0034-find-first-and-last-position-of-element-in-sorted-array) |
| [2089-find-target-indices-after-sorting-array](https://github.com/obj8899/leecode-submissions/tree/master/2089-find-target-indices-after-sorting-array) |
| [2333-minimum-sum-of-squared-difference](https://github.com/obj8899/leecode-submissions/tree/master/2333-minimum-sum-of-squared-difference) |
## Stack
|  |
| ------- |
| [0032-longest-valid-parentheses](https://github.com/obj8899/leecode-submissions/tree/master/0032-longest-valid-parentheses) |
| [0678-valid-parenthesis-string](https://github.com/obj8899/leecode-submissions/tree/master/0678-valid-parenthesis-string) |
| [0856-score-of-parentheses](https://github.com/obj8899/leecode-submissions/tree/master/0856-score-of-parentheses) |
| [0921-minimum-add-to-make-parentheses-valid](https://github.com/obj8899/leecode-submissions/tree/master/0921-minimum-add-to-make-parentheses-valid) |
| [1021-remove-outermost-parentheses](https://github.com/obj8899/leecode-submissions/tree/master/1021-remove-outermost-parentheses) |
| [1541-minimum-insertions-to-balance-a-parentheses-string](https://github.com/obj8899/leecode-submissions/tree/master/1541-minimum-insertions-to-balance-a-parentheses-string) |
## Two Pointers
|  |
| ------- |
| [0026-remove-duplicates-from-sorted-array](https://github.com/obj8899/leecode-submissions/tree/master/0026-remove-duplicates-from-sorted-array) |
| [0028-find-the-index-of-the-first-occurrence-in-a-string](https://github.com/obj8899/leecode-submissions/tree/master/0028-find-the-index-of-the-first-occurrence-in-a-string) |
## Greedy
|  |
| ------- |
| [0678-valid-parenthesis-string](https://github.com/obj8899/leecode-submissions/tree/master/0678-valid-parenthesis-string) |
| [0921-minimum-add-to-make-parentheses-valid](https://github.com/obj8899/leecode-submissions/tree/master/0921-minimum-add-to-make-parentheses-valid) |
| [1541-minimum-insertions-to-balance-a-parentheses-string](https://github.com/obj8899/leecode-submissions/tree/master/1541-minimum-insertions-to-balance-a-parentheses-string) |
| [2333-minimum-sum-of-squared-difference](https://github.com/obj8899/leecode-submissions/tree/master/2333-minimum-sum-of-squared-difference) |
| [2897-apply-operations-on-array-to-maximize-sum-of-squares](https://github.com/obj8899/leecode-submissions/tree/master/2897-apply-operations-on-array-to-maximize-sum-of-squares) |
| [3723-maximize-sum-of-squares-of-digits](https://github.com/obj8899/leecode-submissions/tree/master/3723-maximize-sum-of-squares-of-digits) |
| [3727-maximum-alternating-sum-of-squares](https://github.com/obj8899/leecode-submissions/tree/master/3727-maximum-alternating-sum-of-squares) |
## String Matching
|  |
| ------- |
| [0028-find-the-index-of-the-first-occurrence-in-a-string](https://github.com/obj8899/leecode-submissions/tree/master/0028-find-the-index-of-the-first-occurrence-in-a-string) |
## Z Algorithm
|  |
| ------- |
| [0028-find-the-index-of-the-first-occurrence-in-a-string](https://github.com/obj8899/leecode-submissions/tree/master/0028-find-the-index-of-the-first-occurrence-in-a-string) |
## Knuth–Morris–Pratt Algorithm
|  |
| ------- |
| [0028-find-the-index-of-the-first-occurrence-in-a-string](https://github.com/obj8899/leecode-submissions/tree/master/0028-find-the-index-of-the-first-occurrence-in-a-string) |
## Boyer–Moore String-Search Algorithm
|  |
| ------- |
| [0028-find-the-index-of-the-first-occurrence-in-a-string](https://github.com/obj8899/leecode-submissions/tree/master/0028-find-the-index-of-the-first-occurrence-in-a-string) |
## Breadth-First Search
|  |
| ------- |
| [0301-remove-invalid-parentheses](https://github.com/obj8899/leecode-submissions/tree/master/0301-remove-invalid-parentheses) |
## Sorting
|  |
| ------- |
| [2089-find-target-indices-after-sorting-array](https://github.com/obj8899/leecode-submissions/tree/master/2089-find-target-indices-after-sorting-array) |
| [2333-minimum-sum-of-squared-difference](https://github.com/obj8899/leecode-submissions/tree/master/2333-minimum-sum-of-squared-difference) |
| [3551-minimum-swaps-to-sort-by-digit-sum](https://github.com/obj8899/leecode-submissions/tree/master/3551-minimum-swaps-to-sort-by-digit-sum) |
| [3727-maximum-alternating-sum-of-squares](https://github.com/obj8899/leecode-submissions/tree/master/3727-maximum-alternating-sum-of-squares) |
## Heap (Priority Queue)
|  |
| ------- |
| [2333-minimum-sum-of-squared-difference](https://github.com/obj8899/leecode-submissions/tree/master/2333-minimum-sum-of-squared-difference) |
## Enumeration
|  |
| ------- |
| [2778-sum-of-squares-of-special-elements](https://github.com/obj8899/leecode-submissions/tree/master/2778-sum-of-squares-of-special-elements) |
## Hash Table
|  |
| ------- |
| [2897-apply-operations-on-array-to-maximize-sum-of-squares](https://github.com/obj8899/leecode-submissions/tree/master/2897-apply-operations-on-array-to-maximize-sum-of-squares) |
| [2913-subarrays-distinct-element-sum-of-squares-i](https://github.com/obj8899/leecode-submissions/tree/master/2913-subarrays-distinct-element-sum-of-squares-i) |
| [2916-subarrays-distinct-element-sum-of-squares-ii](https://github.com/obj8899/leecode-submissions/tree/master/2916-subarrays-distinct-element-sum-of-squares-ii) |
| [3551-minimum-swaps-to-sort-by-digit-sum](https://github.com/obj8899/leecode-submissions/tree/master/3551-minimum-swaps-to-sort-by-digit-sum) |
## Bit Manipulation
|  |
| ------- |
| [2897-apply-operations-on-array-to-maximize-sum-of-squares](https://github.com/obj8899/leecode-submissions/tree/master/2897-apply-operations-on-array-to-maximize-sum-of-squares) |
## Math
|  |
| ------- |
| [1569-number-of-ways-to-reorder-array-to-get-same-bst](https://github.com/obj8899/leecode-submissions/tree/master/1569-number-of-ways-to-reorder-array-to-get-same-bst) |
| [3723-maximize-sum-of-squares-of-digits](https://github.com/obj8899/leecode-submissions/tree/master/3723-maximize-sum-of-squares-of-digits) |
## Binary Indexed Tree
|  |
| ------- |
| [2913-subarrays-distinct-element-sum-of-squares-i](https://github.com/obj8899/leecode-submissions/tree/master/2913-subarrays-distinct-element-sum-of-squares-i) |
| [2916-subarrays-distinct-element-sum-of-squares-ii](https://github.com/obj8899/leecode-submissions/tree/master/2916-subarrays-distinct-element-sum-of-squares-ii) |
## Segment Tree
|  |
| ------- |
| [2913-subarrays-distinct-element-sum-of-squares-i](https://github.com/obj8899/leecode-submissions/tree/master/2913-subarrays-distinct-element-sum-of-squares-i) |
| [2916-subarrays-distinct-element-sum-of-squares-ii](https://github.com/obj8899/leecode-submissions/tree/master/2916-subarrays-distinct-element-sum-of-squares-ii) |
## Divide and Conquer
|  |
| ------- |
| [1569-number-of-ways-to-reorder-array-to-get-same-bst](https://github.com/obj8899/leecode-submissions/tree/master/1569-number-of-ways-to-reorder-array-to-get-same-bst) |
## Tree
|  |
| ------- |
| [1569-number-of-ways-to-reorder-array-to-get-same-bst](https://github.com/obj8899/leecode-submissions/tree/master/1569-number-of-ways-to-reorder-array-to-get-same-bst) |
## Union-Find
|  |
| ------- |
| [1569-number-of-ways-to-reorder-array-to-get-same-bst](https://github.com/obj8899/leecode-submissions/tree/master/1569-number-of-ways-to-reorder-array-to-get-same-bst) |
## Binary Search Tree
|  |
| ------- |
| [1569-number-of-ways-to-reorder-array-to-get-same-bst](https://github.com/obj8899/leecode-submissions/tree/master/1569-number-of-ways-to-reorder-array-to-get-same-bst) |
## Memoization
|  |
| ------- |
| [1569-number-of-ways-to-reorder-array-to-get-same-bst](https://github.com/obj8899/leecode-submissions/tree/master/1569-number-of-ways-to-reorder-array-to-get-same-bst) |
## Combinatorics
|  |
| ------- |
| [1569-number-of-ways-to-reorder-array-to-get-same-bst](https://github.com/obj8899/leecode-submissions/tree/master/1569-number-of-ways-to-reorder-array-to-get-same-bst) |
## Binary Tree
|  |
| ------- |
| [1569-number-of-ways-to-reorder-array-to-get-same-bst](https://github.com/obj8899/leecode-submissions/tree/master/1569-number-of-ways-to-reorder-array-to-get-same-bst) |
## Fermat's Little Theorem
|  |
| ------- |
| [1569-number-of-ways-to-reorder-array-to-get-same-bst](https://github.com/obj8899/leecode-submissions/tree/master/1569-number-of-ways-to-reorder-array-to-get-same-bst) |
<!---LeetCode Topics End-->