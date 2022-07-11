#include <stdio.h>

/**
 * main - prints alphabets in both lowercase and uppercase
 * Return: prints 0 if successful
 * no use of printif or puts
 */

int main(void)
{
	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	for (CH = 'A'; CH <= 'Z'; CH++)
	putchar(CH);
	putchar('\n');
	return (0);
}
