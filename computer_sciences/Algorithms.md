
- Compiling -> object files -> .o
    - Pre-Processing
    - abstract syntax tree (AST)
- Linking





- Problem solving (techniques | approaches) (Algorithms)
    - Divide and Conquer (Recursion)
    - Dynamic Programing
    - Greedy approach
    - Backtracking
    - Brute Force

Growth of function



Algorithms Design Methods/Technics :

1. Sequential Method: Selection sort, Bubble Sort and Insertion sort
2. Divide-and-Conquer Method: Merge Sort and Quicksort Algorithms
3. Greedy Method: Minimum Spanning Tree and Knapsack Problems
4. Dynamic Programming Method: Multistage Graphs and TSP (Travelling salesman problem)
5. Backtracking Method: 8-Queens Problem and Hamiltonian Cycles
6. Branch-and-Bound Method: 0/1 Knapsack Problem and TSP 
7. Parallel




--------------------------------------------------------------------------------------------------------------------

Theory of Algorithms === introduction to Alogrithms === Design and Analysis Alogrithms
======================================================================================

> Algorithm: A sequance of instraction describing how to solve problem

Computational Complexity

	* time: function in number of inputs:
        - O(1) === constant
        - O(log n)
        - O(n) === linear -> [0,1,2,3,4,5,6,7,8,9] is contain 3 ??
        - O(n log n)
        - O(n^2) 
        - O(2^n) exponential
            - 2 -> 4
            - 3 -> 8
            - 4 -> 16
            - 5 -> 32
            - 6 -> 64
            - 7 -> 128
            - 8 -> 256
            - 9 -> 512
            - 10 -> 1024
                .
                .
                .
            - 20 -> 1M million
            - 30 -> 1B billion
            - 40 -> 1T trillion
	
	space: function in number of inputs


S



> The Problem-solving Process
(Problem)
    -> Analysis 
        ->(Problem Specification)
            -> Design
                -> (Algorithm)
                    -> Implementation
                        -> (Program)
                            -> Compilation
                                -> (Solution)


Algorithm Analysis: the Algorithm already existing but we improve it to get the best/optimal solution in terms of time and space









- Big O Notation (Worst)
- omega Notation (Best)
- theta Notation (Average)


Ω(n log(n))	Θ(n log(n))	O(n^2)	OO(log(n))

- Bottom- up parsing
- Recursion Tree

Standard Form () === Scientific Notation (USA)








top-down
view/angle










Here is a Github repo with hundreds of Online courses on Computer science topics:

Developer-Y/cs-video-courses

For Algorithms and Data structures, I would recommend following:

CS 61B Berkeley by Jonathan Shewchuk.
Algorithms - Coursera by Tim Roughgarden.
Algorithms - Princeton/Coursera by Robert Sedgewick.
6.006 Intro to Algorithms - MIT



https://medium.com/basecs


69115605





Final = 3 hours

Project = 3
practical = 3


|  | Subject                           | Final |         | Project | Practical | MidTerm |
|  |-----------------------------------|-------|---------|---------|-----------|---------|
| x | Formal Languages & Automata       |  80   |    -    | [](12-8) |    -      | [10](2) |
|  | Numerical Computing Methods       |  65   | Section |   -     |    -      |         |
|  | Logic Programming                 |  65   | Section |   -     | [10](23/9)|         |
| x | Analysis and Design of Algorithms |  65   | Section | [](25/9) |           |         |
|  | Software Engineering              |  65   | Section | [](24/9) | Practical| [10](23/9) |
| x | Assembly Language                 |  65   | Section | [8] | [7](21/9) | [10]()  |



Execution time => Time in seconds
Running Time T(n)
Order O(n)

- Statement
- Condition
- Loop
- Recursion (2 steps 3 methods)
    - recursion tree
    - iteration method
    - master method

|  n   | 10^6 * log(n) | comparison |    20n    |
|------|---------------|------------|-----------|
|  8   |   10^6 * 3    |     >      |    160    |
| 10^6 |   10^6 * 20   |     =      | 10^6 * 20 |
| 10^9 |   10^6 * 30   |     <      | 10^9 * 20 |



fact(n) {
    if (n == 0 || n == 1) return 1;
    else return fact(n-1)*n;
}


fib(n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return fib(n-1) + fib(n-2);
}


> searching:
    - sequential search
    - binary search
        - trinary search
    - jump search




> Sorting Algorithms :

    - Selection Sort
    - Bubble Sort & Recursive Bubble Sort
    - Insertion Sort & Recursive Insertion Sort
    - Merge Sort & Iterative Merge Sort
    - Quick Sort & Iterative Quick Sort
    - Heap Sort
    - Counting Sort
    - Radix Sort
    - Bucket Sort
    - ShellSort
    - TimSort
    - Comb Sort
    - Pigeonhole Sort
    - Cycle Sort
    - Cocktail Sort
    - Strand Sort
    - Bitonic Sort
    - Pancake sorting
    - Binary Insertion Sort
    - BogoSort (Permutation Sort)
    - Gnome Sort
    - Sleep Sort – The King of Laziness / Sorting while Sleeping
    - Structure Sorting (By Multiple Rules) in C++
    - Stooge Sort
    - Tag Sort (To get both sorted and original)
    - Tree Sort
    - Cartesian Tree Sorting
    - Odd-Even Sort / Brick Sort
    - QuickSort on Singly Linked List
    - QuickSort on Doubly Linked List
    - 3-Way QuickSort (Dutch National Flag)
    - Merge Sort for Linked Lists
    - Merge Sort for Doubly Linked List
    - 3-way Merge Sort


Quick Sort with random pivot

    - [Algorithms Series | Session 1 | Introduction to Algorithms](https://www.youtube.com/watch?v=hpmvcBZj9rU&t=2s)



--------------------------------------------------------------------------------------------------------------------------------------------------
Dynamic Programming 
• Problem solving technique
• Computes the optimal solution of the problem by combining the optimal solutions of sub-problems.
• In Dynamic Programming, sub-problems have these characteristics:
    — Can be solved independently
    — The space of the sub-problems is small (polynomial in the input size)
    — Sub-problems overlap
    — No cycles in the (sub-problem | dependancy) graph 
• Sub-problem: a smaller problem that has the same definition of the original problem
• Advantage of dynamic programming: any sub-problem is computed at most once
• Typical use: Optimization problems 



• Implementation:
— Recursive/Top-down (also called memoization)
    - easy in writing -> recurrence equation
    -
— Iterative/Building-table/Bottom-up 
--------------------------------------------------------------------------------------------------------------------------------------------------
Algorithms with Rachit Jain

YouTube Channel: https://www.youtube.com/channel/UC9fDC_eBh9e_bogw87DbGKQ
Competitive Programming Blog: http://rachitiitr.blogspot.com
CodeForces: http://www.codeforces.com/profile/rachitjain
CodeChef: http://www.codechef.com/users/rachitiitr