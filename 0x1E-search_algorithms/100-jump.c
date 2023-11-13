#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array of integers
  * @array: A pointer to the first element of the array to search.
  * @size: number of elements in the array.
  * @value: value to search for.
  * Return: -1 if val not present or array NULL
  * Description: Prints a value every time it is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */

int jump_search(int *array, size_t size, int value)
{
	size_t prev, jump, step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);
	for (prev = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		prev = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; prev < jump && array[prev] < value; prev++)
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

	return (array[prev] == value ? (int)prev : -1);
}
