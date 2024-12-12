#include "sort.h"
/**
  * bubble_sort - sorting algo, bubble type
  * @array: ptr to array of int to sort
  * @size: size or length of the array, in bytes
  * Return: void
  */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp;
	int swap_flag = 1;

	if (size < 2)
		return;

	while (swap_flag == 1)
	{
		swap_flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				swap_flag = 1;
			}
		}
	}
}
