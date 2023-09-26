#include "sort.h"
/**
* selection_sort - implements the selection sort algorithim
* @array: array to be sorted
* @size: no. of items in the array
*
* Return: Nothing
*/
void selection_sort(int *array, size_t size)
{
	size_t j, i;
	int *var;

	if (!array || size < 2)
		return;
	for (i = 0; i < size - 1)
	{
		var = array + i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < *var)
				var = array + j;
			else
				var = var + 0;
		}
		if ((array + i) != var)
		{
			swap(array + 1, index);
			print_array(array, size);
		}
	}
}
