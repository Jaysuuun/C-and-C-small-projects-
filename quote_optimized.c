#include <stdio.h>
#include <string.h>

int main() {
    int i;
    char ready;
    int score = 0;
    char answer[10][32] = {
        "Ryu", "CJ", "Ralof", "Senator Armstrong", "Solair of Astora", 
        "Atlas", "Vaas Montenegro", "Scorpion", "Andrew Ryan", "Isshin Ashina"
    };
    char user_answers[10][32];  // Array to store user answers

    printf("************************************************************************************\n");
    printf("\tGuess who said this quote (Video Game Edition)\n.");
    printf("\tBe careful you must be precise the answers are case sensitive\n.");
    printf("Are you Ready? (Y/N)\n");
    scanf(" %c", &ready);  // Fixed: Added space before %c to consume newline

    if (ready == 'y' || ready == 'Y') {
        printf("Okay then...\n");
    } else {
        printf("Okay then, maybe next time.\n");
        return 0;
    }

    char *quotes[10] = {
        "'Hadouken!'", 
        "'Ah Shit, Here we go again.'", 
        "'Hey, You, You're Finally Awake.'", 
        "'Nanomachines, Son.'", 
        "'The Way I See It, Our Fates Appear To Be Intertwined.'", 
        "'Would you kindly...'", 
        "'Did I ever tell you what the definition of insanity is?'", 
        "'Get over here!'", 
        "'A man chooses, A slave obeys.'", 
        "'Hesitation Is Defeat.'"
    };

    getchar();  // Consume leftover newline from previous input

    for (i = 0; i < 10; i++) {
        printf("%s\n", quotes[i]);
        fgets(user_answers[i], sizeof(user_answers[i]), stdin);
        user_answers[i][strcspn(user_answers[i], "\n")] = '\0';  // Remove newline

        if (strcmp(user_answers[i], answer[i]) == 0) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! The correct answer was: %s\n", answer[i]);
        }
    }

    printf("Your final score: %d/10\n", score);

    return 0;
}
