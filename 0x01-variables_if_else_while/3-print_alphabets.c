#include <stdio.h>
/**
 *main-ALPHABET
 *Return:Ends the program
 */

int main(void)
{
	char ch = 'a';
	char d = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (d = 'A'; d <= 'Z'; d++)
	{
		putchar(d);
	}
		putchar('\n');

	return (0);
}
