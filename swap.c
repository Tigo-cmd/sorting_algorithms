#include "sort.h"
/**
* swap.c - swaps two integers passed
* @a: first param
* @b: second param
*
* Return: Nothing
*/
void swap(int *a, int *b);
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
