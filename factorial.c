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