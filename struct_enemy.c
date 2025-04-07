#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct Player
{
    char name[32];
    int damage;
};

struct Enemy
{
    char name[32];
    char target[4][32];
    // struct Player damagerec;
};

void sortTargets (struct Player player[], int playercount) {
    for (int i = 0; i < playercount - 1; i++)
    {
        for (int j = 0; j < playercount - i - 1; j++)
        {
            if (player[j].damage < player[j + 1].damage){
                
                struct Player temp = player[j];
                player[j] = player[j + 1];
                player[j + 1] = temp;
            }
        }
    }


}


int main (){
    struct Enemy Orc;

    strcpy(Orc.name, "Spathu");

    // struct Player player1 = {"Knight", 100};
    // struct Player player2 = {"Wizard", 200};
    // struct Player player3 = {"Rogue", 300};
    // struct Player player4 = {"Paladin", 50};
    struct Player player[4] = {
        {"Knight", 0},
        {"Wizard", 0},
        {"Rogue", 0},
        {"Paladin", 0}
    };

    int playercount = sizeof(player) / sizeof(player[0]);

    for (int i = 0; i < playercount; i++){
        printf("Enter Damage number for %s: \n", player[i].name);
        while (scanf("%d", &player[i].damage) != 1 || player[i].damage < 0) {
            printf("Invalid input. Please enter a non-negative integer for %s: \n", player[i].name);
            while (getchar() != '\n'); // Clear invalid input
        }
    }

    for (int i = 0; i < playercount; i++){
        printf("The %s has a damage number of %i\n", player[i].name, player[i].damage);
    }

    
    // printf("The %s has a damage number of %i \n", player1.name, player1.damage );
    // printf("The %s has a damage number of %i \n", player2.name, player2.damage );
    // printf("The %s has a damage number of %i \n", player3.name, player3.damage );
    // printf("The %s has a damage number of %i \n", player4.name, player4.damage );



    printf("Beware! The Orc king %s has appeared!", Orc.name);
    printf("The Orc king rushes towards the champions ready to attack here are this main targets in order:\n");

    sortTargets(player, playercount);

    for (int i = 0; i < playercount; i++){
        strcpy(Orc.target[i], player[i].name);
        printf("%d. %s\n", i+1, Orc.target[i]);
    }




    return 0;
}