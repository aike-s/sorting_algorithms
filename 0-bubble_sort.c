#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sorted - verify is array is sorted
 * @array: pontier to array to analice
 * @size: size  of the array
 */
 int sorted(int *array, size_t size)
 {
	int  i = 0;
	for (i=0; (size_t)i < size-1; i++)
	{
		if (array[i] > array[i+1])
			return 1;
	}
	return 0;
 }
/**
 *
 *
 */
void bubble_sort(int *array, size_t size)
{
	int i = 0, tmp = 0, unsorted = 1,  sub = size-1; /* 1 */

	while (unsorted) /* n² */
	{
		i = 0;
		while(i < sub && array[i + 1]) /* n² */
		{
			if (array[i] > array [i + 1]) /* n² */
			{
				tmp = array[i]; /* n² */
				array[i] = array[i + 1]; /* n² */
				array[i + 1] = tmp; /* n² */
				print_array(array, size); /* n² */
			}
			i++; /* n² */
		}
		sub--; /* n */
		unsorted = sorted(array, size); /* n */
	}
}
