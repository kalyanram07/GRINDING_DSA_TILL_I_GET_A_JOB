today is day 3 of my jouney s otoday we are focusing and solving some intermediate problems on arrays and also covering some other concepts like 
two pointers 
sliding window 
hashing 
binary search
dynamic programming 


today we are also covering some other topics like 
2nd largest element 
checking if array is sorted 
counting -ve , +ve and zero elements 
finding largest and smallest elements together 
linear search

bullet points on each topic's

1. two pointer 
 The Two Pointers technique involves using two reference variables (pointers/indices) to traverse a data structure—usually an array or a linked list—simultaneously.
 When to use: Used on linear data structures (often sorted) to find pairs, reverse elements, or detect cycles.
 How it works: Pointers can move in the same direction (like the "Remove Duplicates" problem you just did) or from opposite ends moving toward the center (e.g., finding if a sorted array has two numbers that add up to a target).
 Why it's great: It usually optimizes an $O(n^2)$ brute-force nested loop solution down to a highly efficient $O(n)$ time complexity.


 2. sliding window 

 A specialized variation of the two-pointer approach where the two pointers maintain a "window" (a contiguous subarray or substring) that expands, shrinks, or shifts through the data.
 When to use: Look for keywords like "longest/shortest subarray," "substring with $k$ distinct characters," or "maximum sum of $k$ consecutive elements."
 How it works: * Fixed Window: The window size stays constant (e.g., size $k$), and you slide it one element at a time, adding the new element and removing the old one.
 Dynamic Window: The window expands (moves the right pointer) to find a valid solution, and shrinks (moves the left pointer) to find the optimal or smallest valid solution.
 Why it's great: It avoids recalculating overlapping data from scratch, reducing time complexity from $O(n^2)$ to $O(n)$.

 3. hashing 
 Hashing maps large or variable-sized data into smaller, fixed-size values using a "hash function." In interviews, this manifests as using HashMaps (dictionaries) or HashSets.
 
 When to use: Used when you need instant data retrieval, frequency counting, tracking elements you've already seen, or checking for existence.
 
 How it works: It stores data in key-value pairs. When you look up a key, the hash function tells the computer exactly where to find it instantly.
 
 Why it's great: It offers an incredibly fast average time complexity of $O(1)$ for insertions, deletions, and lookups. The trade-off is that it uses extra memory (space complexity of $O(n)$).

 4. binary search 

 An efficient divide-and-conquer algorithm used to find the position of a target value within a data structure.
 
 When to use: The data MUST be sorted (or have a monotonic property where you can clearly discard half of the search space at each step).
 How it works: You look at the middle element. If it's your target, you're done. If the target is smaller, you discard the right half. If it's larger, you discard the left half. Repeat the process on the remaining half.
 
 Why it's great: It is incredibly fast. Instead of checking every single item ($O(n)$), it cuts the search space in half each step, resulting in a time complexity of $O(\log n)$. For example, searching through 1 million items takes a maximum of only 20 steps!

 5. dynamic programming 

 An algorithmic technique used to solve complex problems by breaking them down into simpler, overlapping subproblems, solving each subproblem exactly once, and storing their answers.
 When to use: Look for problems asking for the "maximum/minimum cost," "number of ways to do something," or optimization problems that exhibit overlapping subproblems (doing the same calculation multiple times) and optimal substructure (the global optimal solution can be built from optimal subproblem solutions).
 How it works: * Top-Down (Memoization): Start with the big problem, break it down recursively, and use a hash table or array to save the results of functions so you don't recompute them.
 Bottom-Up (Tabulation): Start with the smallest base cases and fill up a table (array) iteratively until you reach the final answer.
 
 Why it's great: It turns terrible exponential time complexities (like $O(2^n)$ in naive recursion) into highly manageable linear or polynomial times (like $O(n)$ or $O(n^2)$) by trading a little memory to save time.