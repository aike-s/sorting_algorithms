#include "sort.h"

/**
 * sub_quick_sort -
 * @array:
 * @position1:void quick_sort(int *array, size_t size);
 * @position2:
 * @size:
 * @p_size:
 **/
void sub_quick_sort(int *array, int black_hat, int red_hat, int size,
size_t p_size)
{

if (!(array) || size < 2)
	return;
while (black_hat != red_hat)
{
	if (black_hat < red_hat)
	{
		if (array[black_hat] > array[red_hat])
		{
			SWAP(array[black_hat], array[red_hat], int);
			SWAP(black_hat, red_hat, int);
			print_array(array, p_size);
			red_hat++;
		}
		else
			red_hat--;
	}

	else if (black_hat > red_hat)
	{
		if (array[black_hat] < array[red_hat])
		{
			SWAP(array[black_hat], array[red_hat], int);
			SWAP(black_hat, red_hat, int);
			print_array(array, p_size);
			red_hat--;
		}
		else
			red_hat++;
	}
}

sub_quick_sort(array,  black_hat - 1,  0, black_hat, p_size);
sub_quick_sort(array, (p_size - 1), (black_hat + 1),
(size - black_hat - 1), p_size);
}
/**
 * quick_sort -  sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: the array to be check_sorted
 * @size: size of the array
 * Return: always void
 **/
void quick_sort(int *array, size_t size)
{

	sub_quick_sort(array, (int)size-1, 0, (int)size, size);
}
