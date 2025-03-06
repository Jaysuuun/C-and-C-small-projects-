#include<stdio.h>


int main(){

    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};  
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};  

    int number, i;
    
    printf("Enter a number to convert to roman numerals.\n");
    scanf("%d", &number);
    if(number <= 0){
        printf("Error: Invalid input.\n");
        return 1;
    }


    for (int i = 0; i < 13; i++) { //loop through the values
        while (number >= values[i]) {
            printf("%s", symbols[i]);
            number -= values[i]; 
    }

    /*
    For each value in the array, repeatedly subtract the value 
    from the input number and append the corresponding symbol 
    until the number is less than the current value.
    */

    //old attempt
    
    // if (number < 4){
    //     for (i = 0; i < number; i++)
    //         putchar(one);
    // } 
    // else if(number == 4)
    // {
    //     printf("%c%c", one,five);
    // }
    // else if (number >= 5 && number < 9){
    //     int temp = number - 5;
    //     putchar(five);
    //     for(i=0; i < temp; i++)
    //         putchar(one);
    // }
    // else if(number == 9)
    // {
    //     printf("%c%c", one,ten);
    // }
    // else if(number == 10)
    // {
    //     printf("%c",ten);
    // }
    // else if(number > 10 && number < 15);
    // {
    //     int temp = number - 10;
    //     putchar(ten);
    //     for(i=0; i < temp; i++)
    //         putchar(one);
    // }

    // printf("%d", number);
  
    return 0;
}