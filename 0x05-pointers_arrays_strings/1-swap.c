#include "main.h"
/**
 * swap_int - Entry Point
 * @a : character that points to an int
 * @b : character that points to an int
 * Return:void
 */
void swap_int(int *a, int *b)
{
	int tmp_var;

	tmp_var = *a;
	*a = *b;
	*b = tmp_var;
}
