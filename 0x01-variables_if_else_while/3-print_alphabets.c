#include <stdio.h>

/**
 * main - prints the alphabets
 *
 *Return: 0 (success)
 */

int main(void)
{
	char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar("\n");
	return (0);
}
