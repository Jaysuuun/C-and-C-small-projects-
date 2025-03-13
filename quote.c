#include<stdio.h>
#include<string.h>

int main(){

    int i;
    char ready;
    int score = 0;
    char answer[10][32] = {"Ryu","CJ", "Ralof", "Senator Armstrong","Solair of Astora",
         "Atlas", "Vaas Montenegro", "Scorpion", "Andrew Ryan", "Isshin Ashina"};
    char user_answer[10][32];


    printf("************************************************************************************\n");
    printf("\tGuess who said this quote video game edition.\n ");
    printf("\tBe careful you must be precise the answers are case sensitive.\n");
    printf("Are you Ready? (Y/N)\n");
    scanf(" %c", &ready);

    

    if (ready == 'y' || ready == 'Y'){
        printf("Okay then...\n");

    }else {
        printf("Okay then maybe next time.\n");
        return 0;
    }


    while (getchar() != '\n');

    // Quote 1
    printf("'Hadouken!'\n");
    fgets(user_answer[0], sizeof(user_answer[0]), stdin);
    user_answer[0][strcspn(user_answer[0], "\n")] = '\0';

    // Quote 2
    printf("'Ah Shit, Here we go again.'\n");
    fgets(user_answer[1], sizeof(user_answer[1]), stdin);
    user_answer[1][strcspn(user_answer[1], "\n")] = '\0';

    // Quote 3
    printf("'Hey, You, You're Finally Awake.'\n");
    fgets(user_answer[2], sizeof(user_answer[2]), stdin);
    user_answer[2][strcspn(user_answer[2], "\n")] = '\0';

    // Quote 4
    printf("'Nanomachines, Son.'\n");
    fgets(user_answer[3], sizeof(user_answer[3]), stdin);
    user_answer[3][strcspn(user_answer[3], "\n")] = '\0';

    // Quote 5
    printf("'The Way I See It, Our Fates Appear To Be Intertwined.'\n");
    fgets(user_answer[4], sizeof(user_answer[4]), stdin);
    user_answer[4][strcspn(user_answer[4], "\n")] = '\0';

    // Quote 6
    printf("'Would you kindly...'\n");
    fgets(user_answer[5], sizeof(user_answer[5]), stdin);
    user_answer[5][strcspn(user_answer[5], "\n")] = '\0';

    // Quote 7
    printf("'Did I ever tell you what the definition of insanity is?'\n");
    fgets(user_answer[6], sizeof(user_answer[6]), stdin);
    user_answer[6][strcspn(user_answer[6], "\n")] = '\0';

    // Quote 8
    printf("'Get over here!'\n");
    fgets(user_answer[7], sizeof(user_answer[7]), stdin);
    user_answer[7][strcspn(user_answer[7], "\n")] = '\0';

    // Quote 9
    printf("'A man chooses, A slave obeys.'\n");
    fgets(user_answer[8], sizeof(user_answer[8]), stdin);
    user_answer[8][strcspn(user_answer[8], "\n")] = '\0';

    // Quote 10
    printf("'Hesitation Is Defeat.'\n");
    fgets(user_answer[9], sizeof(user_answer[9]), stdin);
    user_answer[9][strcspn(user_answer[9], "\n")] = '\0';

    // Check answers and calculate score
    for (i = 0; i < 10; i++) { 
        if (strcmp(user_answer[i], answer[i]) == 0) {
            printf("Question %d: Correct!\n", i+1);
            score += 1;
        } else {
            printf("Question %d: Wrong! The correct answer was '%s'.\n", i+1, answer[i]);
        }
    }

    printf("Your final score: %d out of 10\n", score);


    return 0;
}