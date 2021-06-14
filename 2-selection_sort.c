#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: the array to be check_sorted
 * @size: size of the array
 * Return: always void
 **/
void selection_sort(int *array, size_t size)
{
	unsigned int index = 0, to_compare = 0, swap_num = 0, tmp_i = 0, tmp = 0;

	for (index = 0; index < size; index++)
	{
		swap_num = array[index];

		/* it starts comparing from the current index, */
		/* so it will find the smallest number to be organized from now on */
		for (to_compare = index; to_compare < size; to_compare++)
		{
			if ((int)swap_num > array[to_compare])
			{
				/* Here is found the smallest number in the whole array */
				swap_num = array[to_compare];
				tmp_i = to_compare;
			}
		}
		/* If there is any number to swap do... */
		if ((int)swap_num != array[index])
		{
			/* Swap both numbers and print */
			tmp = array[index];
			array[index] = swap_num;
			array[tmp_i] = tmp;
			print_array(array, size);
		}
	}
}
