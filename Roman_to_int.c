#include<stdio.h>
#include<string.h>

int main(){
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};  
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};  

    char roman[128];
    int result = 0;
    int valid = 1;

    printf("Enter Roman numerals for conversion.\n");
    fgets(roman, 128, stdin);
    
    // Remove newline if present
    roman[strcspn(roman, "\n")] = 0;
    
    int len = strlen(roman);
    
    // Check if input is empty
    if (len == 0) {
        printf("Error: Empty input\n");
        return 1;
    }
    
    // Convert Roman to integer
    int i = 0;
    while (i < len && valid) {
        int found = 0;
        
        // Check for two-character symbols first
        if (i + 1 < len) {
            char twoChar[3] = {roman[i], roman[i+1], '\0'};
            for (int j = 0; j < 13; j++) {
                if (strcmp(twoChar, symbols[j]) == 0) {
                    result += values[j];
                    i += 2;
                    found = 1;
                    break;
                }
            }
        }
        
        // If no two-character match, check for single character
        if (!found) {
            char oneChar[2] = {roman[i], '\0'};
            found = 0;
            for (int j = 0; j < 13; j++) {
                if (strcmp(oneChar, symbols[j]) == 0) {
                    result += values[j];
                    i += 1;
                    found = 1;
                    break;
                }
            }
            
            // If character not found in valid symbols
            if (!found) {
                valid = 0;
            }
        }
    }
    
    if (valid) {
        printf("Integer value: %d\n", result);
    } else {
        printf("Error: Invalid Roman numeral\n");
    }

    return 0;
}