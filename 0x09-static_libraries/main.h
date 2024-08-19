#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, const char *src);
int _atoi(char *s);
char *_strcat(char *dest, const char *src);
char *_strncat(char *dest, const char *src, int n);
char *_strncpy(char *dest, const char *src, int n);
int _strcmp(const char *s1, const char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, const char *src, unsigned int n);
char *_strchr(const char *s, char c);
unsigned int _strspn(const char *s, const char *accept);
char *_strpbrk(const char *s, const char *accept);
char *_strstr(const char *haystack, const char *needle);

#endif /* MAIN_H */

