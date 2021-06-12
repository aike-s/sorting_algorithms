#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * check_sorted - verify if the array is sorted
 * @array: the array to be sorted
 * @size: size  of the array
 * Return: 0 on success 1 otherwise
 */
int check_sorted(int *array, size_t size)
{
	int  i = 0;

	for (i = 0; (size_t)i < size - 1; i++)
	{
		/* Is the current number greater than the next number? */
		if (array[i] > array[i + 1])
		{
			/* Means that the array is not yet sorted */
			return (UNSORTED);
		}
	}
	/* If I got this far, the array is sorted :) */
	return (SORTED);
}

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: the array to be check_sorted
 * @size: size of the array
 * Return: always void
 **/
void bubble_sort(int *array, size_t size)
{
	int i = 0, tmp = 0, check_unsorted = UNSORTED,  unsorted_nums = size - 1;

	if (!(array) || size < 2)
		return;

	while (check_unsorted)
	{
		i = 0;
		/* while there is a following position and i is < size, do... */
		while (i < unsorted_nums && array[i + 1])
		{
			/* Is the current number greater than the next number? */
			if (array[i] > array[i + 1])
			{
				/* Swap both numbers and print */
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
			i++;
		}
		/* Subtract one number for each one that was sorted */
		unsorted_nums--;
		/* check if the array has been sorted */
		check_unsorted = check_sorted(array, size);
	}
}
