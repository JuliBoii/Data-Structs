# Notes for Data Structures

### using c++ and python

## Big O

Comparing two sets of code mathmatically, based on how efficently they run.

Time complexity, is not measuered by time.
Measured in the number of operations that it takes to complete somehting.
This, is to negate the use of a better computer to run a code faster. Thus, the
system being used is not the main factor.

We also measure space complexity. That is the amount of storage a set of code takes up.

Both complexities prioritize differenet things.

We will mainly be dealing with time complexity.

When dealing with time complexity and space complexity, we will
see the following three greek leters:

- Omega Ω
- Theta Θ
- Omocron O

Given an array, and we want to find a certain value. There are three possible cases:

- Best Case: represented by omega
- Average Case: represented by theta
- Worst Case: represented by Big O

### Big O: Worst Case

$$
\Omega
$$

- O(1): Constant Time
-- Doesn't depend on the size of the data set.
-- Example: Accessing an array element by its index.
- O(log n): Logarithmic Time
-- Splits the data in each step (divide and conquer).
-- Example: Binary search.
- O(n): Linear Time
-- Directly proporFonal to the data set size.
-- Example: Looping through an array.
- O(n log n): Linearithmic Time
-- Splits and sorts or searches data.
-- Example: Merge sort, quick sort.
- O(n2): Polynomial Time
-- Nested loops for each power of n.
-- Example: Bubble sort (O(n2)).