#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints alphabets in reverse'
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}