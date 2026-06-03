## PROBLEM : 1 THE "JUMPLING LOOP"
def print_pattern(n):
    i = 1
    while i <= n:
        print(i, end=" ")
        i = i * 2  

        # THE LOOP JUMPS TO THE NEXT POWER OF 2 IN EACH ITERATION, RESULTING IN A LOGARITHMIC NUMBER OF ITERATIONS RELATIVE TO N. SO THE FINAL TIME COMPLEXITY IS O(logn)


# Problem 2: Sequential Loops vs. Nested Loops
# Goal: Witness the performance difference between running loops back-to-back versus packing them inside one another.

# Code A (Sequential Loops)

def run_sequential(n):
    # Loop 1
    for i in range(n):
        print(i)
        
    # Loop 2
    for j in range(n):
        print(j)

# here the time complexity is O(n) + O(n) = O(2n) which simplifies to O(n)

# Code B (Nested Loops)

def run_nested(n):
    for i in range(n):          # Outer Loop
        for j in range(n):      # Inner Loop
            print(f"{i}, {j}")

# here the time complexity is O(n) * O(n) = O(n^2) because for each iteration of the outer loop, the inner loop runs n times. So the total number of iterations is n * n = n^2.

# Problem 3: The "Shrinking" Nested Loop
# Goal: Evaluate a nested loop where the inner loop's boundary changes dynamically based on the outer loop.

def print_pairs(n):
    for i in range(n):
        # j starts at i + 1, skipping elements we already processed
        for j in range(i + 1, n): 
            print(f"{i} {j}")

# here the time complexity is O(n^2) because the inner loop runs n - i times for each iteration of the outer loop. When you sum this up across all iterations of the outer loop, it results in a total of n(n-1)/2 iterations, which simplifies to O(n^2).