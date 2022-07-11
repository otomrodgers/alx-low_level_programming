#include <stdio.h>

/**
 * main - prints alphabets in lowercase expet q & e
 * Return: prints 0 on success
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
		putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
