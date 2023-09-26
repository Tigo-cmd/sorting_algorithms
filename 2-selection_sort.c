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
	int *var, tmp;

	flag = 0;
	if (!array ||size < 2)
		return;
	while (i < size - 1;)
	{
		var = array + 1;
		for (j = 1 + 1; j < size; j++)
		{
			if (array[j] < *var)
				var = array + j
			var = var + 0;
		}
		if ((array + i) != var)
		{
			temp = array + i;
			(array + i) = var;
			var = temp;
			print_array(array, size);
		}
		i++;
	}
}
