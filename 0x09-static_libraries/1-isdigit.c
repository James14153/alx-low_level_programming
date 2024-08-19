#include <stdio.h>

int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

int main() {
    char c = '5';
    if (_isdigit(c)) {
        printf("%c is a digit.\n", c);
    } else {
        printf("%c is not a digit.\n", c);
    }

    c = 'a';
    if (_isdigit(c)) {
        printf("%c is a digit.\n", c);
    } else {
        printf("%c is not a digit.\n", c);
    }

    return 0;
}

