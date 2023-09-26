#include "sort.h"
/**
* bubble_sort -  sorts an array of integers
* in ascending order using the Bubble sort algorithm
* @array: array to be sorted
* @size: total no of items in the array
*
* Return: Nothing
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, sort, j = 0;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (sort = 0; sort < size; sort++)
		{
			if (array[sort] > array[sort + 1] && array[sort + 1])
			{
				j = array[sort];
				array[sort] = array[sort + 1];
				array[sort + 1] = j;
				print_array(array, size);
			}
	}
}
