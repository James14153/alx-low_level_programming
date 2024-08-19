#include <stdio.h>

int _isalpha(int c) {
    // Check if c is an uppercase letter or a lowercase letter
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int main() {
    char ch1 = 'A';
    char ch2 = 'z';
    char ch3 = '1';

    printf("Character '%c' is %salpha.\n", ch1, _isalpha(ch1) ? "" : "not ");
    printf("Character '%c' is %salpha.\n", ch2, _isalpha(ch2) ? "" : "not ");
    printf("Character '%c' is %salpha.\n", ch3, _isalpha(ch3) ? "" : "not ");

    return 0;
}

