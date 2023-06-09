#ifndef FILE_MAIN
#define FILE_MAIN

char *_memset(char *s, char b, unsigned int n);
int _putchar(char c);
char *_memcpy(char *dest, char *src, unsigned int n);
unsigned int _strspn(char *s, char *accept);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
void print_chessboard(char (*a)[8]);
void set_string(char **s, char *to);
#endif
