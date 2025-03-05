#include<stdio.h>

int main(){

    float previous;
    float current;
    float rate;
    float tax;

    rate = 13.7;

    printf("What was your previous electric bill reading in kwh?\n");
    scanf("%f", &previous);

    printf("Now what is your current electric bill reading in kwh?\n");
    scanf("%f", &current);

    if (previous > current){
        printf("Previous reading cannot be larger than the current reading\n");
        return 1;
    }

    float consumption = current - previous;
    tax = consumption * rate * .10;
    float electric_bill = consumption * rate + tax;

    printf("Your current electric bill is $%.4f", electric_bill);


    return 0;
}