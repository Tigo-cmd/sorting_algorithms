#include "sort.h"
/**
* swap - swaps two integers passed
* @a: first param
* @b: second param
*
* Return: Nothing
*/
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

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
	for (i = 0; i < size - 1; i++)
	{
		var = array + i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < *var)
				var = array + j;
		}
		if ((array + i) != var)
		{
			swap(array + i, var);
			print_array(array, size);
		}
	}
}
