#include<stdio.h>
// #include<math.h>


int main(){

    float number1;
    char operator;
    float number2;
    float result;


    printf("Please enter the first number.\n");
    scanf("%f", &number1);

    printf("Please enter the second number.\n");
    scanf("%f", &number2);

    printf("Please choose and operator.\n");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        result = number1 + number2;
        break;
    case '-':
        result = number1 - number2;
        
        break;
    case '*':
        result = number1 * number2;
        break;
    case '/':
        if (number2 == 0) {  
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        }
        result = number1 / number2;
        break;
    case '%':
        result = (int)number1 % (int)number2;
        break;
    
    default:
        printf("Please enter a valid operator(+, -, *, /).\n");
        return 1;
    }

    printf("Result: %.1f", result);

    return 0;
}