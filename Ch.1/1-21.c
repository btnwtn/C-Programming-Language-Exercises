/**
 * entab
 *
 * Write a program entab that replaces strings of blanks by the
 * minimum number of tabs and blanks to achieve the same spacing. Use the
 * same tab stops as for detab. When either a tab or a single blank would suffice
 * to reach a tab stop, which should be given preference?
 */
#include <stdio.h>
#define TAB_WIDTH 4

int main() {
    int c;
    int num_spaces = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++num_spaces;
            continue;
        }

        while (num_spaces > 0) {
            if (num_spaces >= TAB_WIDTH) {
                putchar('\t');
                num_spaces -= TAB_WIDTH;
            } else {
                putchar(' ');
                num_spaces--;
            }
        }

        num_spaces = 0;
        putchar(c);
    }

    return 0;
}
