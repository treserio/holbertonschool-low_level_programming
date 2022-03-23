#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>

/* linear search functions */
int linear_search(int *array, size_t size, int value);

/* binary search functions */
int binary_search(int *array, size_t size, int value);
int b_split(int *array, size_t st, size_t end, int val);
int advanced_binary(int *array, size_t size, int value);

/* helpers */
void p_array(int *array, size_t idx, size_t end);
size_t mid_point(size_t low, size_t high);
int first_idx(int *array, size_t st, size_t end, int val);

#endif
