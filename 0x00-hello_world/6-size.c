#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizepf(char));
	printf("Size of a int: %i byte(s)\n", sizepf(int));
	printf("Size of a long int: %i byte(s)\n", sizepf(long int));
	printf("Size of a long long int: %i byte(s)\n", sizepf(long long int));
	printf("Size of a float: %i byte(s)\n", sizepf(float));
	return (0);
}
