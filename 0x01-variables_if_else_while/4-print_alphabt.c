#include <stdio>

/**
 * main - main function
 *
 * Return: Always 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z' && i != 'q' && i != 'e'; i++)

		if (i != 'e' && i != 'q')
			putchar (i);
	putchar ('\n');

	return (0);
}
