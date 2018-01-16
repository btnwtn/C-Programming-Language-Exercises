/**
 * Write a program to "fold" long input lines into two or more
 * shorter lines after the last non-blank character that occurs before the n-th
 * column of input. Make sure your program does something intelligent with very
 * long lines, and if there are no blanks or tabs before the specified column
 */
#include <stdio.h>

int main() {
    int c;

    int count = 0;
    int max_len = 80;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            putchar(c);
            count = 0;
            continue;
        }

        if (count > max_len) {
            if (c == '\t' || c == ' ') {
                putchar('\n');
                count = 0;
                continue;
            } else {
                putchar('\n');
                putchar('-');
                count = 1;
            }
        }

        count++;
        putchar(c);
    }

    return 0;
}
