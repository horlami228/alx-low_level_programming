#ifndef SEARCH_ALGOS_H
#define SEARCH _ALGOS_H


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
void print_array(int *array, int lb, int hb);

#endif /*SEARCH_ALGOS_H*/

