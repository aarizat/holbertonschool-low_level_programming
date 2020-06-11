#include <stdlib.h>
#include <time.h>

/**
 * main - Check if a number.
 * @void: Null value
 *
 * Description: Print if a number is positive, negative or zero
 * Return: Zero value
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zzero", n);
	}
	return (0);
}
