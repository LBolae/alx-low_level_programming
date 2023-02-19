#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	int lastDigitOfN;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigitOfN = n % 10;

	if (lastDigitOfN > 5)
		printf("Last digit of %d is %d and is greater than 5", n, lastDigitOfN);

	else if (lastDigitOfN == 0)
                printf("Last digit of %d is %d and is zero", n, lastDigitOfN);

	else if (lastDigitOfN < 6 && lastDigitOfN != 0)
                printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigitOfN);

	printf("\n");



	return (0);
}
