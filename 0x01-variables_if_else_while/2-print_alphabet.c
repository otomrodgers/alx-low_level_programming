#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 * Return: prints 0 is successful
 * Only allowed to use putchar
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	putchar('\n');
	}
	return (0);
}
