#include<stdio.h>
#include<stdbool.h>

float cal(float number1, float number2, char operator);

int main(){

    bool a = true;
    float number1;
    char operator;
    float number2;
    char con;

    while( a == true){
        printf("Please enter the first number.\n");
        scanf("%f", &number1);

        printf("Please enter the second number.\n");
        scanf("%f", &number2);

        printf("Please choose and operator.\n");
        scanf(" %c", &operator);


        cal(number1, number2, operator);

    
        printf("Do you still want to continue? (y/n)\n");
        scanf(" %c", &con);

        if (con == 'n' || con == 'N') {
            a = false;  // Set `a` to false to break the loop
            printf("Thank you, see you again!\n");
        }
    }

    return 0;
}

float cal(float number1, float number2, char operator){

    
    float result;

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

    printf("Result: %.1f \n", result);
}