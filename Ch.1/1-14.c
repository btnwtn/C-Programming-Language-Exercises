/**
 * Exercise 1-14.
 *
 * Write a program to print a histogram of the frequencies of different
 * characters in its input.
 */
#include <stdio.h>
#define ASCII 256

int is_whitespace(char c);

int main() {
    /* assume ASCII */
    int chars[ASCII];
    int c, i, largest;
    largest = 0;

    for (i = 0; i < ASCII; i++) {
        chars[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        chars[c] += 1;
    }

    for (i = 0; i < ASCII; i++) {
        if (chars[i] == 0 || is_whitespace(i)) {
            continue;
        }

        if (chars[i] > largest) {
            largest = chars[i];
        }
    }

    printf("\n");

    while (largest > 0) {
        printf("| ");
        for (i = 0; i < ASCII; i++) {
            if (chars[i] == 0 || is_whitespace(i)) {
                continue;
            }

            if (chars[i] >= largest) {
                printf("* ");
            } else {
                printf("  ");
            }
        }

        largest--;
        printf("\n");
    }

    printf(" ");

    for (i = 0; i < ASCII; i++) {
        if (chars[i] == 0 || is_whitespace(i)) {
            continue;
        }

        printf("--");
    }

    printf("--\n");
    printf("  ");

    for (i = 0; i < ASCII; i++) {
        if (chars[i] == 0 ||  is_whitespace(i)) {
            continue;
        }

        printf("%c ", i);
    }

    printf("\n");

    return 0;
}

int is_whitespace(char c) {
    return c == '\n' || c == ' ' || c == '\t';
}
