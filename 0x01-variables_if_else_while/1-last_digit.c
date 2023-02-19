#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastDigitOfN;

	lastDigitOfN = n % 10;

	if (lastDigitOfN > 5)
		printf("Last digit of %d is %d and is greater than 5", n, lastDigitOfN);



	return (0);
}
