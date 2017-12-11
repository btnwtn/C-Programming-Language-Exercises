#include <stdio.h>
#define MAXLINE 1000

int get_line(char s[]);

int main() {
    int len;
    char line[MAXLINE];

    while ((len = get_line(line)) > 0) {
        if (len > 80) {
            printf("%s", line);
        }
    }

    return 0;
}

int get_line(char s[]) {
    int c, i;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
