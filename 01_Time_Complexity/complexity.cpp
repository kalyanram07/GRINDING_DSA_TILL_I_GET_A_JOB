// PROBLEM : 1 THE "JUMPLING LOOP"
//GOAL IS TO DETERTMINE THE TIME COMPLEXITY OF THE SPECIFIC LOOP STRUCTURES 

void printPattern(int n) {
    for (int i = 1; i <= n; i = i * 2) {
        std::cout << i << " ";
    }
}

// here we  can define the time complexity of the above program as O(log n) because the loop variable i is multiplied by 2 in each iteration, which means it will take log base 2 of n iterations to reach or exceed n.

// problem 2 - two independent loops vs nersted loops

//  code 1 - sequential loop

void runSequential(int n) {
    // Loop 1
    for (int i = 0; i < n; i++) {
        std::cout << i << "\n";
    }
    // Loop 2
    for (int j = 0; j < n; j++) {
        std::cout << j << "\n";
    }
}

// here we can define time complexoity as O(n) + O(n) = O(2n) which simplifies to O(n)

// code 2 - nested loop

void runNested(int n) {
    for (int i = 0; i < n; i++) {       // Outer loop
        for (int j = 0; j < n; j++) {   // Inner loop
            std::cout << i << "," << j << "\n";
        }
    }
}

// here we can define time complexity as O(n) * O(n) = O(n^2) because the inner loop runs n times for each iteration of the outer loop, resulting in n * n iterations in total.

// PROBLEM 3 - THE SHRINKING NESTED LOOP 

// HERE THE GOAL IS TO FIND THE COMPLEXITY WHEN THE INNER LOOP DEPENDS ON THE OUTER LOOP , THIS IS EXACTLY HOW THE ALGORITHMS LIKE SELECTION SORT WORKS 

void printPairs(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // Notice: j starts at i + 1
            std::cout << i << " " << j << "\n";
        }
    }
}

// HERE THE TIME COMPLEXITY CAN BE DEFINED AS O(n^2) because the inner loop runs fewer times as i increases, but in total, it still results in approximately n*(n-1)/2 iterations, which simplifies to O(n^2).

// FROM THESE EXAMPLES WE CAN END THE TIME COMPLEXITY SECTION IN CPP