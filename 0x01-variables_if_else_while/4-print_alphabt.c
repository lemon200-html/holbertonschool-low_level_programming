#include <stdio.h>
/**
 *main-alphabt
 *Return: Ends the program
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch != 'q') && (ch != 'e'))
		putchar(ch);

	}
		putchar('\n');

	return (0);
}
