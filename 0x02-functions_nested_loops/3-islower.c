#include "main.h"

/**
 * _islower - check if char is lowercase
 *
 * @c: parameter to be printed
 *
 * Return: 1 if char is lowercase
 * and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
