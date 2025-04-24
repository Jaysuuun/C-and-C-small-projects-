#include <stdio.h>

int convert() {
    int value = 0;
    char ch;
    while ((ch = getchar()) != ' ' && ch != '\n' && ch != EOF) {
        if (ch >= '0' && ch <= '9') {
            value = value * 10 + (ch - '0');
        }
    }
    return value;
}

int gcd(int u, int v) {
    int t;
    while (u > 0) {
        if (u < v) {
            t = u; u = v; v = t;
        }
        u = u - v;
    }
    return v;
}

struct fraction {
    int numerator;
    int denominator;
};

int main() {
    int x, y;
    
    while (1) {
        printf("Enter numerator and denominator (space-separated, then Enter): ");
        x = convert();
        y = convert();

        if (x <= 0 || y <= 0)
            break;

        struct fraction pair = {x, y};
        int divisor = gcd(pair.numerator, pair.denominator);
        int reduced_numer = pair.numerator / divisor;
        int reduced_denom = pair.denominator / divisor;

        printf("Original: %d/%d\n", x, y);
        printf("Reduced: %d/%d\n", reduced_numer, reduced_denom);
    }

    return 0;
}
