#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * mian - Entry point
 *
 * Return: Always 0 (Success)
 */

int mian(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
			putchar(low);
	}
	putchar('\n');
	return (0);
}
