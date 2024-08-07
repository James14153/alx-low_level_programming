#include <stdio.h>

int _strcmp(const char *s1, const char *s2) {
    while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 != *s2) {
            return (unsigned char)*s1 - (unsigned char)*s2;
        }
        s1++;
        s2++;
    }
    
    // Handle cases where strings are of different lengths
    return (unsigned char)*s1 - (unsigned char)*s2;
}

int main() {
    char str1[] = "apple";
    char str2[] = "apricot";
    char str3[] = "apple";
    
    int result1 = _strcmp(str1, str2); // Should be negative
    int result2 = _strcmp(str2, str1); // Should be positive
    int result3 = _strcmp(str1, str3); // Should be 0
    
    printf("Comparing '%s' and '%s': %d\n", str1, str2, result1);
    printf("Comparing '%s' and '%s': %d\n", str2, str1, result2);
    printf("Comparing '%s' and '%s': %d\n", str1, str3, result3);

    return 0;
}

