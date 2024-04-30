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
	size_t j, norm, temp, i;

	i = 0;
	while (i < size)
	{
		norm = 0;
		j = 0;
		while (j < size - 1 - i)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				norm = 1;
				print_array(array, size);
			}
			j++;
		}
		if (norm == 0)
			break;
		i++;
	}
}
