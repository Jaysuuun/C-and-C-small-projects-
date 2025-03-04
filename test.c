#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {

    printf("Hello World\n");
    // test comment
    /*
        multi line comment
    */

    int age;

    age = 25;

    char gender[] = "Male";

    char status;

    status = 'S';

    float grade;

    grade = 3.5;

    const int number = 69;

    printf("%d \n", number);

    char name[128];

    char identification;

    printf("I am %i years old\n", age);
    printf("My status is %c \n", status);
    printf("I am a %s", gender);
    printf("\n");

    printf("1\t2\t3\n");
    printf("4\t5\t6\n");
    printf("7\t8\t8\n");
    printf("#\t0\tdel\n");
    printf("Time\n");

    
    printf("What's your name?\n");
    // scanf("%s", &name);
    fgets(name, 128, stdin);
    name[strlen(name)-1] = '\0';

    printf("Hello %s \n", name);

    printf("What about you? How old are you?\n");
    scanf("%d", &age);

    printf ("Wow! Youre %d years old\n", age);

    printf("What about your dog? How old is he?\n");
    scanf("%d", &age);

    if (age >= 2){
        printf("Wow! He is now elegible for these vaccines");
    }
    else
    {
        printf("Sorry He is too young for that");
    }



    printf("\nWhat do you identify as?");
    scanf(" %c", &identification); 

    switch (identification)
    {
    case 'M':
        printf("\nOkay that's great");
        break;
    case 'F':
        printf("\nOkay that's awersome!");
        break;
    case 'G':
        printf("\nOkay that's awersome!");
        break;
    case 'L':
        printf("\nOkay that's awersome!");
        break;
    default:
        printf("\nWoah! you are something else.");
        break;
    }




    return 0;
}