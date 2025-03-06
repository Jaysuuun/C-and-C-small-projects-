#include<stdio.h>

int main() {
    int number, i;
    unsigned long long factorial = 1; // Initialize factorial to 1

    printf("Enter an integer: ");
    scanf("%i", &number);

    if (number < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= number; i++) {
            factorial *= i; // Multiply by i instead of 1
        }
        printf("The factorial of %d is %llu\n", number, factorial);
    }

    return 0;
}

/*
The factorial of a non-negative integer n (denoted as n!) is the product of all positive integers from 1 to n.
Examples:

5! = 5 × 4 × 3 × 2 × 1 = 120

0! = 1 (by definition)

1! = 1

How the Code Works
Let’s analyze the code step by step:

1. Initialization

unsigned long long factorial = 1;

Factorial starts at 1 because the multiplicative identity is 1. Multiplying by 1 ensures the first iteration starts correctly (e.g., 1 × 1 = 1 for 1!).

2. Input Handling

printf("Enter an integer: ");
scanf("%i", &number);

The user enters an integer (e.g., 5).

Check for Negative Input

if (number < 0) {
    printf("Error: Factorial of a negative number doesn't exist.\n");
}

Factorials of negative numbers are undefined, so the code prints an error.

4. Loop to Compute Factorial

for (i = 1; i <= number; i++) {
    factorial *= i; // Multiply factorial by the current value of i
}

Loop Logic:

Start at i = 1.

Multiply factorial by i in each iteration.

Increment i until it reaches the input number.

Example Walkthrough (Input = 5)
Let’s trace the loop iterations for number = 5:

Iteration	i	factorial Calculation	Result
1	1	1 * 1 = 1	1
2	2	1 * 2 = 2	2
3	3	2 * 3 = 6	6
4	4	6 * 4 = 24	24
5	5	24 * 5 = 120	120
Final Output:
The factorial of 5 is 120


Edge Cases
Input = 0:

The loop doesn’t run (i <= 0 is false).

factorial remains 1, which matches 0! = 1.

Input = 1:

Loop runs once (i = 1).

factorial = 1 * 1 = 1.

Key Code Features
Data Type: unsigned long long ensures large factorials (e.g., 20! = 2432902008176640000) don’t overflow immediately.

Efficiency: The loop runs in O(n) time complexity, which is optimal for factorial computation.

 

*/