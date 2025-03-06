#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, original = num, remainder;

    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return original == reversed;
}
/*
reversed → Stores the reversed version of num (initially 0).
original → Saves the original num (needed for comparison later).
remainder → Stores the last digit of num in each iteration.

Extract the last digit of num using num % 10.
Append it to reversed by multiplying reversed by 10 and adding remainder.
Remove the last digit from num by doing num /= 10.

If the original number is the same as the reversed number, return 1 (true) → it's a palindrome.
Otherwise, return 0 (false) → it's not a palindrome.

Example 1: Checking 121
Initialization:
num = 121, original = 121, reversed = 0
First Iteration (num = 121)
remainder = 121 % 10 = 1
reversed = 0 * 10 + 1 = 1
num = 121 / 10 = 12
Second Iteration (num = 12)
remainder = 12 % 10 = 2
reversed = 1 * 10 + 2 = 12
num = 12 / 10 = 1
Third Iteration (num = 1)
remainder = 1 % 10 = 1
reversed = 12 * 10 + 1 = 121
num = 1 / 10 = 0 (loop stops)
Final Check:
original (121) == reversed (121) → Palindrome!
Example 2: Checking 123
Initialization:
num = 123, original = 123, reversed = 0
Iterations:
reversed becomes 3, then 32, then 321
Final num = 0, reversed = 321
Final Check:
original (123) != reversed (321) → Not a palindrome!

*/
int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}
