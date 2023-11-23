#ifndef MAIN_H
#define MAIN_H

void _print(char *str, int l);
char *mul(char n, char *num, int num_index, char*dest, int dest, int dest_index);
int check_for_digits(char **av);
#include <stdio.h>
#include <stdlib.h>
int _putchar(char C);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
voide *_calloc(unsigned int nmeb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
