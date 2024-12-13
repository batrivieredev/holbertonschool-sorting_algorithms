#include "sort.h"
/**
  * selection_sort - sorting algo, selection sort
  * @array: ptr to array of int to sort
  * @size: size or length of the array
  * Return: void
  */
void selection_sort(int *array, size_t size)
{
	size_t i, j, psi; /*Potential Swap Index*/
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		psi = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[psi] > array[j]) /*compare values at idx*/
				psi = j; /*store new psi*/
		}
		if (psi != i)
		{
			temp = array[i];
			array[i] = array[psi];
			array[psi] = temp;
			print_array(array, size);
		}
	}
}
