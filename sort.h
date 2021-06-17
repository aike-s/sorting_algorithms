#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>

#define SORTED 0
#define UNSORTED 1

/*----------------- MACROS FUNCTIONS ----------------- */
/**
 * SWAP - function is used to swap two va riables.
 * - Parameters
 * @VARIABLE_A: variable to swap
 * @VARIABLE_B: variable to swap
 * @TYPE: type of the variables
 * - Locals
 * #TMP_SWAP: temporal variable for to save value
 */
#define SWAP(VARIABLE_A, VARIABLE_B, TYPE) \
	do {                                   \
		TYPE TMP_SWAP = VARIABLE_A;        \
		VARIABLE_A = VARIABLE_B;           \
		VARIABLE_B = TMP_SWAP;             \
	} while (0)




/* DATA STRUCTURE */
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* FUNCTIONS */
/* Prints an array of integers */
void print_array(const int *array, size_t size);
/* Prints a list of integers */
void print_list(const listint_t *list);
/* Sorts an array of integers in ascending order */
/* using the Bubble sort algorithm */
void bubble_sort(int *array, size_t size);
/* Sorts a doubly linked list of integers in ascending order */
/*using the Insertion sort algorithm */
void insertion_sort_list(listint_t **list);
/* Sorts an array of integers in ascending order */
/* using the Selection sort algorithm */
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif
