#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

/* linear search functions */
int linear_search(int *array, size_t size, int value);

/* binary search functions */
int binary_search(int *array, size_t size, int value);
int b_split(int *array, size_t st, size_t end, int val);
int advanced_binary(int *array, size_t size, int value);

/* linear_skip */
skiplist_t *linear_skip(skiplist_t *list, int value);

/* helpers */
void p_array(int *array, size_t idx, size_t end);
size_t mid_point(size_t low, size_t high);
int first_idx(int *array, size_t st, size_t end, int val);

#endif
