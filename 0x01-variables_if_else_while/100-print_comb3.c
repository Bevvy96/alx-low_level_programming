#include <stdio.h>
/**
 * main - Prints a combination of numbers between 00 t0 89
 * Return: returns 0
 */

int main(void)
{
	int i = 48;
	int j = 48;

	while (j < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (j != i && j < i)
			{
				putchar(j);
				putchar(i);
				if (i == 57 && j == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}
