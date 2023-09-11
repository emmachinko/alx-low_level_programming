#include  <stdio.h>

/**
 * main - print the lowercase alphabet in reverse, followed by a new line.
 *
 * return: 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch > = 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
