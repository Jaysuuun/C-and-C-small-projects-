#include <stdio.h>
#include <string.h>
#include <ctype.h>


void cleanString(const char *input, char *output) {
    int j = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (isalpha(input[i])) {  
            output[j++] = tolower(input[i]);  
        }
    }
    output[j] = '\0';  
}

void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char word[128], cleaned[128], reversed[128];

    printf("Enter a word or sentence: ");
    fgets(word, sizeof(word), stdin);


    word[strcspn(word, "\n")] = '\0';


    cleanString(word, cleaned);

 
    strcpy(reversed, cleaned);
    reverseString(reversed);

    
    if (strcmp(cleaned, reversed) == 0) {
        printf("It's a palindrome!\n");
    } else {
        printf("It's not a palindrome.\n");
    }

    return 0;
}
