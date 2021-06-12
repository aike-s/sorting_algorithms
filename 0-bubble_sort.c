#include "sort.h"
/**
 * a_swap - swaps two numbers in an array
 * @array: the array to be sorted
 * @index: index in which are the numbers to be swapped
 * Return: always void
 **/
void a_swap(int **array, unsigned int index)
{
    int tmp = *array[index];

    *array[index] = *array[index + 1];
    *array[index + 1] = tmp;
}

/**
 * sorted_nums - counts the numbers that were already sorted
 * at the end of the array
 * @array: the array to be sorted
 * @unsorted_nums: the amount of numbers that have not
 * been sorted at the moment
 * Return: the amount of numbers that have already been sorted
 **/
unsigned int sorted_nums(int *array, unsigned int unsorted_nums)
{
    unsigned int total_to_sub = 0, index = unsorted_nums;

    if (!(array))
        return 0;

    /* The array will be traversed from the end to the beginning, */
    /* so the index will be decremented with each iteration */
    while (array)
    {
        /*If index - 1 exists and if it is less than the current index, do...*/
        if (array[index - 1] && array[index] > array[index - 1])
        {
            total_to_sub++;
            continue;
        }
        else
            break;
        index--;
    }
    return total_to_sub;
}

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: the array to be sorted
 * @size: size of the array
 * Return: always void
 **/
void bubble_sort(int *array, size_t size)
{
    unsigned int i, unsorted_nums = size;

    if (size < 2)
        return;

    /* unsorted_nums will decrement as numbers are sorted  */
    while (unsorted_nums > 0)
    {
        /*Scrolls the array until there are no more numbers left to be sorted*/
        for (i = 0; i <= unsorted_nums; i++)
        {
            /* If there is a following position do... */
            if (array[i + 1])
            {
                /* Is the current number greater than the next number? */
                if (array[i] > array[i + 1])
                {
                    /* Swap both numbers and print */
                    a_swap(&array, i);
                    print_array(array, size);
                }
            }
            /* At this point we are "at the end of the array" */
            else
            {
                /* Subtract how many numbers have been sorted */
                unsorted_nums -= (sorted_nums(array, unsorted_nums));
            }
        }
    }
    return;
}
