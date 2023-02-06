#include "search_algos.h"

/**
* linear_search - function that searches for a value in an array of...
* ...integers using the Linear search algorithm
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
*
* Return: the first index where value is located, If value is not present in...
* array or if array is NULL, your function must return -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%li]\n",
			(long int)i, (long int)array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
