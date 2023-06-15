#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char *string_nconcat(char *s1, char *s2, unsigned int n);
int _strlen(char *s);
int is_digit(char *s);
int _putchar(char c);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void errors(void);
void *malloc_checked(unsigned int b);

#endif
