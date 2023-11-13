#include "main.h"
/**
 * _isalpha - test whether a char is from English alphabet.
 * @c: char to be checked.
 * Return: 1 if the char is an English char.
 * 0 if the char is not an English char.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
else
	return (0);
}
