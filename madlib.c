#include <stdio.h>
#include <string.h>

int main() {
    int i, j;
    int score = 0;
    char answer[2][2][32] = { {"Fear", "obliteration"}, {"Weaker", "Stronger"} };
    char user_answers[2][2][32];

    printf("************************************************************************************\n");
    printf("\tComplete the Dune quotes. (Case Sensitive)\n");

    char *quotes[2] = {
        "'I must not fear. ___ is the mind-killer. Fear is the little death that brings total ___!'", 
        "'When I am ___ Than You, I ask you for Freedom because that is according to your principles; when I am ___ than you, I take away your Freedom Because that is according to my principles.'"
    };

    for (i = 0; i < 2; i++) {  // Loop through quotes
        printf("\n%s\n", quotes[i]);

        for (j = 0; j < 2; j++) {  // Loop through missing words
            printf("Enter word %d: ", j + 1);
            fgets(user_answers[i][j], sizeof(user_answers[i][j]), stdin);
            user_answers[i][j][strcspn(user_answers[i][j], "\n")] = '\0';  // Remove newline

            if (strcmp(user_answers[i][j], answer[i][j]) == 0) {
                printf("Correct!\n");
                score++;
            } else {
                printf("Wrong! The correct answer was: %s\n", answer[i][j]);
            }
        }
    }

    printf("\nYour final score: %d/4\n", score);
    return 0;
}
