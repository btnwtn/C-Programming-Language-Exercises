#include <stdio.h>

int get_line(char s[]);
void reverse(char s[]);

int main() {
    char s[] = "hello";

    while (get_line(s)) {
        reverse(s);
        printf("%s", s);
    }

    return 0;
}

int get_line(char s[]) {
    int c, i;

    for (i = 0; i < 1000-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

void reverse(char s[]) {
    int len = 0;

    while (s[len] != '\0') {
        len++;
    }

    // check for overflow
    if (len > 0 && s[len - 1] == '\n') {
        len--;
    }

    for (int i = 0; i < len / 2; i++) {
        int j = len - 1 - i;
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
