#ifndef _main_h_
#define _main_h_

#include <stddef.h>
#include <stdlib.h>
char *create_array(unsigned int size, char c);
int _putchar(char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int word_count(char *s);
int calc_len(char *str);
int num_words(char *str);

#endif
