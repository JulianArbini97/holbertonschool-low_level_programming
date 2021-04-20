#ifndef H_ALGO
#define H_ALGO


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
