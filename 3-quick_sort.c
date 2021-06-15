#include "sort.h"
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
 *
 *
 *
 */
void quick_sort(int *array, size_t size)
{
	int tmp = 0, pivot = 0, index = 0, unsorted = 1, loop = 0;
	pivot = size - 1;  /* el Pivote es la primera  posicion*/

	/* este ciclo revisa desde la posision mas a la izquierda hacia la derecha */
	while(unsorted)
	{
		if(pivot == index && pivot != 0)
		{
			index = 0;
			pivot--;
		}
		if(pivot == 0 && index == 0)
		{
			index = 0;
			pivot = size - 1;
		}
		while (index < pivot && pivot != 0)
		{
			if(array[index] > array[pivot])
			{
				tmp = array[index];
				array[index] = array[pivot];
				array[pivot] = tmp;
				tmp = pivot;
				pivot = index;
				index = tmp;
				print_array(array, size);
				/* loop para recorrer hacia  la derechas */
				while (pivot < index)
				{
					if(array[index]< array[pivot])
					{
						tmp = array[index];
						array[index] = array[pivot];
						array[pivot] = tmp;
						tmp = pivot;
						pivot = index;
						index = tmp;
						print_array(array, size);
					}
					else
						index--;
				}
			}
			else
				index++;
		}
	unsorted = check_sorted(array, size);
	}
}