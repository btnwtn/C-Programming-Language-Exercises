#include <stdio.h>

int main() {
    int c;
    int in_space = 0;
    int in_tab = 0;
    int in_nl = 0;

    while ((c = getchar()) != EOF) {
        if (
            (in_space && c == ' ') || 
            (in_tab && c == '\t') || 
            (in_nl && c == '\n')
        ) {
            continue;
        }

        in_space = c == ' ';
        in_tab = c == '\t';
        in_nl = c == '\n';

        printf("%c", c);
    }

    return 0;
}
